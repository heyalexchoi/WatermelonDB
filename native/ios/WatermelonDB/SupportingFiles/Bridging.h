#if __has_include("FMDB.h")
#import "FMDB.h"
#import "FMDatabase+InMemoryOnDiskIO.h"
#else
#import "../FMDB/src/fmdb/FMDB.h"
#import "../FMDB/src/extra/InMemoryOnDiskIO/FMDatabase+InMemoryOnDiskIO.h"
#endif

#import <React/RCTBridgeModule.h>

#if __has_include("JSIInstaller.h")
#import "JSIInstaller.h"
#else
#import "../JSIInstaller.h"
#endif

#if __has_include("DatabaseDeleteHelper.h")
#import "DatabaseDeleteHelper.h"
#else
#import "../DatabaseDeleteHelper.h"
#endif
