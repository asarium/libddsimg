#include "test_data.h"

static MipmapSizeInformation Col_Viper_compressed[] = {
        {
                512,
                512,
                1,
                262144,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                256,
                256,
                1,
                65536,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                128,
                128,
                1,
                16384,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                64,
                64,
                1,
                4096,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                32,
                32,
                1,
                1024,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                16,
                16,
                1,
                256,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                8,
                8,
                1,
                64,
                DDSIMG_ERR_NO_ERROR,
        }
};

static MipmapSizeInformation Col_Viper_decompressed[] = {
        {
                512,
                512,
                1,
                1048576,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                256,
                256,
                1,
                262144,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                128,
                128,
                1,
                65536,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                64,
                64,
                1,
                16384,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                32,
                32,
                1,
                4096,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                16,
                16,
                1,
                1024,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                8,
                8,
                1,
                256,
                DDSIMG_ERR_NO_ERROR,
        }
};

static SubimageInformation Col_Viper_subimages[] = {
        {
                Col_Viper_compressed,
                Col_Viper_decompressed,
        }
};

TestCaseData Col_Viper = {
        TEST_DATA_PATH "Col_Viper_Mk7e_Th11.dds",
        {
                512,
                512,
                1,
                DDSIMG_COM_DXT5,
                DDSIMG_FORMAT_R8G8B8A8,
                0,
                1,
                7,
        },
        Col_Viper_subimages
};

static MipmapSizeInformation DRADIS_Target_compressed[] = {
        {
                64,
                64,
                1,
                4096,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                32,
                32,
                1,
                1024,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                16,
                16,
                1,
                256,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                8,
                8,
                1,
                64,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                4,
                4,
                1,
                16,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                2,
                2,
                1,
                16,
                DDSIMG_ERR_NO_ERROR,
        },
};

static MipmapSizeInformation DRADIS_Target_decompressed[] = {
        {
                64,
                64,
                1,
                16384,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                32,
                32,
                1,
                4096,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                16,
                16,
                1,
                1024,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                8,
                8,
                1,
                256,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                4,
                4,
                1,
                64,
                DDSIMG_ERR_NO_ERROR,
        },
        {
                2,
                2,
                1,
                16,
                DDSIMG_ERR_NO_ERROR,
        },
};

static SubimageInformation DRADIS_Target_subimages[] = {
        {
                DRADIS_Target_compressed,
                DRADIS_Target_decompressed,
        }
};

TestCaseData DRADIS_Target = {
        TEST_DATA_PATH "DRADIS_Target.dds",
        {
                64,
                64,
                1,
                DDSIMG_COM_DXT5,
                DDSIMG_FORMAT_R8G8B8A8,
                0,
                1,
                6,
        },
        DRADIS_Target_subimages
};