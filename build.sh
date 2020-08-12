export PATH="$HOME/proton/bin:$PATH"
SECONDS=0

mkdir -p out
make O=out ARCH=arm64 vendor/laurel_sprout-perf_defconfig
make -j16 O=out ARCH=arm64 CC=clang LD=ld.lld AR=llvm-ar NM=llvm-nm OBJCOPY=llvm-objcopy OBJDUMP=llvm-objdump STRIP=llvm-strip CROSS_COMPILE=aarch64-linux-gnu- CROSS_COMPILE_ARM32=arm-linux-gnueabi- Image.gz-dtb

if [ -f "out/arch/arm64/boot/Image.gz-dtb" ]; then
git clone -q https://github.com/Vishalcj17/AnyKernel3 -b laurel_sprout
cp out/arch/arm64/boot/Image.gz-dtb AnyKernel3
rm -f *zip
cd AnyKernel3
zip -r9 "../Evie-Laurel_sprout-$(date '+%m%d')" * -x '*.git*' README.md *placeholder
cd ..
rm -rf AnyKernel3
rm -rf out
echo -e "\nCompleted in $((SECONDS / 60)) minute(s) and $((SECONDS % 60)) second(s) !"
else
echo -e "\nBuild failed!"
fi
