cmd_arch/arm/boot/dts/qcom/../sparrow_sr_pni_apq8026-v2-320p-w-mtp.dtb := /home/noahvt/Documents/NKernel6.0/scripts/gcc-wrapper.py /usr/local/share/arm-eabi-4.9/bin/arm-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/qcom/../.sparrow_sr_pni_apq8026-v2-320p-w-mtp.dtb.d.pre.tmp -nostdinc -I/home/noahvt/Documents/NKernel6.0/arch/arm/boot/dts -I/home/noahvt/Documents/NKernel6.0/arch/arm/boot/dts/include -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/qcom/../.sparrow_sr_pni_apq8026-v2-320p-w-mtp.dtb.dts.tmp arch/arm/boot/dts/qcom/sparrow_sr_pni_apq8026-v2-320p-w-mtp.dts ; /home/noahvt/Documents/NKernel6.0/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/qcom/../sparrow_sr_pni_apq8026-v2-320p-w-mtp.dtb -b 0 -i arch/arm/boot/dts/qcom/  -d arch/arm/boot/dts/qcom/../.sparrow_sr_pni_apq8026-v2-320p-w-mtp.dtb.d.dtc.tmp arch/arm/boot/dts/qcom/../.sparrow_sr_pni_apq8026-v2-320p-w-mtp.dtb.dts.tmp ; cat arch/arm/boot/dts/qcom/../.sparrow_sr_pni_apq8026-v2-320p-w-mtp.dtb.d.pre.tmp arch/arm/boot/dts/qcom/../.sparrow_sr_pni_apq8026-v2-320p-w-mtp.dtb.d.dtc.tmp > arch/arm/boot/dts/qcom/../.sparrow_sr_pni_apq8026-v2-320p-w-mtp.dtb.d

source_arch/arm/boot/dts/qcom/../sparrow_sr_pni_apq8026-v2-320p-w-mtp.dtb := arch/arm/boot/dts/qcom/sparrow_sr_pni_apq8026-v2-320p-w-mtp.dts

deps_arch/arm/boot/dts/qcom/../sparrow_sr_pni_apq8026-v2-320p-w-mtp.dtb := \
  arch/arm/boot/dts/qcom/sparrow_sr_pni_apq8026-v2.dtsi \
  arch/arm/boot/dts/qcom/sparrow_sr_pni_msm8226-v2.dtsi \
  arch/arm/boot/dts/qcom/sparrow_sr_pni_msm8226.dtsi \
  arch/arm/boot/dts/qcom/skeleton.dtsi \
  arch/arm/boot/dts/qcom/msm8226-camera.dtsi \
  arch/arm/boot/dts/qcom/msm-gdsc.dtsi \
  arch/arm/boot/dts/qcom/msm8226-iommu.dtsi \
  arch/arm/boot/dts/qcom/msm-iommu-v1.dtsi \
  arch/arm/boot/dts/qcom/msm8226-smp2p.dtsi \
  arch/arm/boot/dts/qcom/msm8226-gpu.dtsi \
  arch/arm/boot/dts/qcom/msm8226-bus.dtsi \
  arch/arm/boot/dts/qcom/sparrow_sr_pni_msm8226-mdss.dtsi \
  arch/arm/boot/dts/qcom/sparrow_sr_pni_msm8226-mdss-panels.dtsi \
  arch/arm/boot/dts/qcom/dsi-panel-rm69032-320x320-cmd.dtsi \
  arch/arm/boot/dts/qcom/msm8226-coresight.dtsi \
  arch/arm/boot/dts/qcom/msm8226-iommu-domains.dtsi \
  arch/arm/boot/dts/qcom/msm8226-pinctrl.dtsi \
  arch/arm/boot/dts/qcom/msm-rdbg.dtsi \
  arch/arm/boot/dts/qcom/msm-pm8226-rpm-regulator.dtsi \
  arch/arm/boot/dts/qcom/sparrow_sr_pni_msm-pm8226.dtsi \
  arch/arm/boot/dts/qcom/sparrow_sr_pni_msm8226-regulator.dtsi \
  arch/arm/boot/dts/qcom/msm8226-v2-pm.dtsi \
  arch/arm/boot/dts/qcom/msm8226-w-memory.dtsi \
  arch/arm/boot/dts/qcom/msm8226-w-ion.dtsi \
  arch/arm/boot/dts/qcom/msm8226-w-qseecom.dtsi \
  arch/arm/boot/dts/qcom/msm8226-w-sharedmem.dtsi \
  arch/arm/boot/dts/qcom/sparrow_sr_pni_msm8226-720p-mtp.dtsi \
  arch/arm/boot/dts/qcom/batterydata-palladium.dtsi \
  arch/arm/boot/dts/qcom/batterydata-mtp-3000mah.dtsi \
  arch/arm/boot/dts/qcom/msm8x26w-gpu.dtsi \

arch/arm/boot/dts/qcom/../sparrow_sr_pni_apq8026-v2-320p-w-mtp.dtb: $(deps_arch/arm/boot/dts/qcom/../sparrow_sr_pni_apq8026-v2-320p-w-mtp.dtb)

$(deps_arch/arm/boot/dts/qcom/../sparrow_sr_pni_apq8026-v2-320p-w-mtp.dtb):
