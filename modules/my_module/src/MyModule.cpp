#include "MyModule.h"

#include "zlib.h"

namespace my_module
{
    
    void Module::run()
    {
        int ret, flush;
        unsigned have;
        z_stream strm;
        unsigned char in[100];
        unsigned char out[100];

        /* allocate deflate state */
        strm.zalloc = Z_NULL;
        strm.zfree = Z_NULL;
        strm.opaque = Z_NULL;
        ret = deflateInit(&strm, 5);
        if (ret != Z_OK)
            return;

    }

} // namespace my_module