cmd_drivers/iommu/built-in.o :=  /usr/local/share/arm-eabi-4.7/bin/arm-eabi-ld -EL    -r -o drivers/iommu/built-in.o drivers/iommu/iommu.o drivers/iommu/of_iommu.o drivers/iommu/msm_iommu.o drivers/iommu/msm_iommu_domains.o drivers/iommu/msm_iommu_mapping.o drivers/iommu/msm_iommu-v1.o drivers/iommu/msm_iommu_dev-v1.o drivers/iommu/msm_iommu_sec.o drivers/iommu/msm_iommu_pagetable.o 
