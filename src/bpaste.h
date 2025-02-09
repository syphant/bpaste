typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
float10
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined6;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

typedef struct PMD PMD, *PPMD;

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

typedef int ptrdiff_t;

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

struct PMD {
    ptrdiff_t mdisp;
    ptrdiff_t pdisp;
    ptrdiff_t vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    RTTIClassHierarchyDescriptor *pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
};

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor **pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Class Structure
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    RTTIClassHierarchyDescriptor *pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef ulonglong __uint64;

typedef struct IShellFolder IShellFolder, *PIShellFolder;

typedef struct IShellFolderVtbl IShellFolderVtbl, *PIShellFolderVtbl;

typedef long HRESULT;


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef GUID IID;

typedef ulong DWORD;

typedef DWORD ULONG;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef struct IBindCtx IBindCtx, *PIBindCtx;

typedef wchar_t WCHAR;

typedef WCHAR *LPWSTR;

typedef struct _ITEMIDLIST _ITEMIDLIST, *P_ITEMIDLIST;

typedef struct _ITEMIDLIST ITEMIDLIST;

typedef ITEMIDLIST *LPITEMIDLIST;

typedef DWORD SHCONTF;

typedef struct IEnumIDList IEnumIDList, *PIEnumIDList;

typedef ITEMIDLIST *LPCITEMIDLIST;

typedef long LONG_PTR;

typedef LONG_PTR LPARAM;

typedef uint UINT;

typedef ULONG SFGAOF;

typedef DWORD SHGDNF;

typedef struct _STRRET _STRRET, *P_STRRET;

typedef struct _STRRET STRRET;

typedef WCHAR *LPCWSTR;

typedef struct IBindCtxVtbl IBindCtxVtbl, *PIBindCtxVtbl;

typedef struct IUnknown IUnknown, *PIUnknown;

typedef struct tagBIND_OPTS tagBIND_OPTS, *PtagBIND_OPTS;

typedef struct tagBIND_OPTS BIND_OPTS;

typedef struct IRunningObjectTable IRunningObjectTable, *PIRunningObjectTable;

typedef WCHAR OLECHAR;

typedef OLECHAR *LPOLESTR;

typedef struct IEnumString IEnumString, *PIEnumString;

typedef struct _SHITEMID _SHITEMID, *P_SHITEMID;

typedef struct _SHITEMID SHITEMID;

typedef struct IEnumIDListVtbl IEnumIDListVtbl, *PIEnumIDListVtbl;

typedef union _union_3888 _union_3888, *P_union_3888;

typedef struct IUnknownVtbl IUnknownVtbl, *PIUnknownVtbl;

typedef struct IRunningObjectTableVtbl IRunningObjectTableVtbl, *PIRunningObjectTableVtbl;

typedef struct IMoniker IMoniker, *PIMoniker;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

typedef struct IEnumMoniker IEnumMoniker, *PIEnumMoniker;

typedef struct IEnumStringVtbl IEnumStringVtbl, *PIEnumStringVtbl;

typedef ushort USHORT;

typedef uchar BYTE;

typedef struct IMonikerVtbl IMonikerVtbl, *PIMonikerVtbl;

typedef GUID CLSID;

typedef struct IStream IStream, *PIStream;

typedef int BOOL;

typedef union _ULARGE_INTEGER _ULARGE_INTEGER, *P_ULARGE_INTEGER;

typedef union _ULARGE_INTEGER ULARGE_INTEGER;

typedef struct IEnumMonikerVtbl IEnumMonikerVtbl, *PIEnumMonikerVtbl;

typedef struct IStreamVtbl IStreamVtbl, *PIStreamVtbl;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct tagSTATSTG tagSTATSTG, *PtagSTATSTG;

typedef struct tagSTATSTG STATSTG;

typedef struct _struct_22 _struct_22, *P_struct_22;

typedef struct _struct_23 _struct_23, *P_struct_23;

typedef double ULONGLONG;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

typedef long LONG;

struct IStreamVtbl {
    HRESULT (*QueryInterface)(struct IStream *, IID *, void **);
    ULONG (*AddRef)(struct IStream *);
    ULONG (*Release)(struct IStream *);
    HRESULT (*Read)(struct IStream *, void *, ULONG, ULONG *);
    HRESULT (*Write)(struct IStream *, void *, ULONG, ULONG *);
    HRESULT (*Seek)(struct IStream *, LARGE_INTEGER, DWORD, ULARGE_INTEGER *);
    HRESULT (*SetSize)(struct IStream *, ULARGE_INTEGER);
    HRESULT (*CopyTo)(struct IStream *, struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER *, ULARGE_INTEGER *);
    HRESULT (*Commit)(struct IStream *, DWORD);
    HRESULT (*Revert)(struct IStream *);
    HRESULT (*LockRegion)(struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*UnlockRegion)(struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*Stat)(struct IStream *, STATSTG *, DWORD);
    HRESULT (*Clone)(struct IStream *, struct IStream **);
};

struct _SHITEMID {
    USHORT cb;
    BYTE abID[1];
};

struct _ITEMIDLIST {
    SHITEMID mkid;
};

struct IEnumStringVtbl {
    HRESULT (*QueryInterface)(struct IEnumString *, IID *, void **);
    ULONG (*AddRef)(struct IEnumString *);
    ULONG (*Release)(struct IEnumString *);
    HRESULT (*Next)(struct IEnumString *, ULONG, LPOLESTR *, ULONG *);
    HRESULT (*Skip)(struct IEnumString *, ULONG);
    HRESULT (*Reset)(struct IEnumString *);
    HRESULT (*Clone)(struct IEnumString *, struct IEnumString **);
};

struct IStream {
    struct IStreamVtbl *lpVtbl;
};

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

struct IEnumIDList {
    struct IEnumIDListVtbl *lpVtbl;
};

struct IMoniker {
    struct IMonikerVtbl *lpVtbl;
};

struct IEnumString {
    struct IEnumStringVtbl *lpVtbl;
};

struct IEnumIDListVtbl {
    HRESULT (*QueryInterface)(struct IEnumIDList *, IID *, void **);
    ULONG (*AddRef)(struct IEnumIDList *);
    ULONG (*Release)(struct IEnumIDList *);
    HRESULT (*Next)(struct IEnumIDList *, ULONG, LPITEMIDLIST *, ULONG *);
    HRESULT (*Skip)(struct IEnumIDList *, ULONG);
    HRESULT (*Reset)(struct IEnumIDList *);
    HRESULT (*Clone)(struct IEnumIDList *, struct IEnumIDList **);
};

struct IEnumMonikerVtbl {
    HRESULT (*QueryInterface)(struct IEnumMoniker *, IID *, void **);
    ULONG (*AddRef)(struct IEnumMoniker *);
    ULONG (*Release)(struct IEnumMoniker *);
    HRESULT (*Next)(struct IEnumMoniker *, ULONG, struct IMoniker **, ULONG *);
    HRESULT (*Skip)(struct IEnumMoniker *, ULONG);
    HRESULT (*Reset)(struct IEnumMoniker *);
    HRESULT (*Clone)(struct IEnumMoniker *, struct IEnumMoniker **);
};

struct tagBIND_OPTS {
    DWORD cbStruct;
    DWORD grfFlags;
    DWORD grfMode;
    DWORD dwTickCountDeadline;
};

struct _struct_22 {
    DWORD LowPart;
    DWORD HighPart;
};

struct _struct_23 {
    DWORD LowPart;
    DWORD HighPart;
};

union _ULARGE_INTEGER {
    struct _struct_22 s;
    struct _struct_23 u;
    ULONGLONG QuadPart;
};

struct IBindCtx {
    struct IBindCtxVtbl *lpVtbl;
};

struct IBindCtxVtbl {
    HRESULT (*QueryInterface)(struct IBindCtx *, IID *, void **);
    ULONG (*AddRef)(struct IBindCtx *);
    ULONG (*Release)(struct IBindCtx *);
    HRESULT (*RegisterObjectBound)(struct IBindCtx *, struct IUnknown *);
    HRESULT (*RevokeObjectBound)(struct IBindCtx *, struct IUnknown *);
    HRESULT (*ReleaseBoundObjects)(struct IBindCtx *);
    HRESULT (*SetBindOptions)(struct IBindCtx *, BIND_OPTS *);
    HRESULT (*GetBindOptions)(struct IBindCtx *, BIND_OPTS *);
    HRESULT (*GetRunningObjectTable)(struct IBindCtx *, struct IRunningObjectTable **);
    HRESULT (*RegisterObjectParam)(struct IBindCtx *, LPOLESTR, struct IUnknown *);
    HRESULT (*GetObjectParam)(struct IBindCtx *, LPOLESTR, struct IUnknown **);
    HRESULT (*EnumObjectParam)(struct IBindCtx *, struct IEnumString **);
    HRESULT (*RevokeObjectParam)(struct IBindCtx *, LPOLESTR);
};

struct IRunningObjectTableVtbl {
    HRESULT (*QueryInterface)(struct IRunningObjectTable *, IID *, void **);
    ULONG (*AddRef)(struct IRunningObjectTable *);
    ULONG (*Release)(struct IRunningObjectTable *);
    HRESULT (*Register)(struct IRunningObjectTable *, DWORD, struct IUnknown *, struct IMoniker *, DWORD *);
    HRESULT (*Revoke)(struct IRunningObjectTable *, DWORD);
    HRESULT (*IsRunning)(struct IRunningObjectTable *, struct IMoniker *);
    HRESULT (*GetObjectA)(struct IRunningObjectTable *, struct IMoniker *, struct IUnknown **);
    HRESULT (*NoteChangeTime)(struct IRunningObjectTable *, DWORD, FILETIME *);
    HRESULT (*GetTimeOfLastChange)(struct IRunningObjectTable *, struct IMoniker *, FILETIME *);
    HRESULT (*EnumRunning)(struct IRunningObjectTable *, struct IEnumMoniker **);
};

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct tagSTATSTG {
    LPOLESTR pwcsName;
    DWORD type;
    ULARGE_INTEGER cbSize;
    FILETIME mtime;
    FILETIME ctime;
    FILETIME atime;
    DWORD grfMode;
    DWORD grfLocksSupported;
    CLSID clsid;
    DWORD grfStateBits;
    DWORD reserved;
};

struct IMonikerVtbl {
    HRESULT (*QueryInterface)(struct IMoniker *, IID *, void **);
    ULONG (*AddRef)(struct IMoniker *);
    ULONG (*Release)(struct IMoniker *);
    HRESULT (*GetClassID)(struct IMoniker *, CLSID *);
    HRESULT (*IsDirty)(struct IMoniker *);
    HRESULT (*Load)(struct IMoniker *, struct IStream *);
    HRESULT (*Save)(struct IMoniker *, struct IStream *, BOOL);
    HRESULT (*GetSizeMax)(struct IMoniker *, ULARGE_INTEGER *);
    HRESULT (*BindToObject)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, IID *, void **);
    HRESULT (*BindToStorage)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, IID *, void **);
    HRESULT (*Reduce)(struct IMoniker *, struct IBindCtx *, DWORD, struct IMoniker **, struct IMoniker **);
    HRESULT (*ComposeWith)(struct IMoniker *, struct IMoniker *, BOOL, struct IMoniker **);
    HRESULT (*Enum)(struct IMoniker *, BOOL, struct IEnumMoniker **);
    HRESULT (*IsEqual)(struct IMoniker *, struct IMoniker *);
    HRESULT (*Hash)(struct IMoniker *, DWORD *);
    HRESULT (*IsRunning)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, struct IMoniker *);
    HRESULT (*GetTimeOfLastChange)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, FILETIME *);
    HRESULT (*Inverse)(struct IMoniker *, struct IMoniker **);
    HRESULT (*CommonPrefixWith)(struct IMoniker *, struct IMoniker *, struct IMoniker **);
    HRESULT (*RelativePathTo)(struct IMoniker *, struct IMoniker *, struct IMoniker **);
    HRESULT (*GetDisplayName)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, LPOLESTR *);
    HRESULT (*ParseDisplayName)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, LPOLESTR, ULONG *, struct IMoniker **);
    HRESULT (*IsSystemMoniker)(struct IMoniker *, DWORD *);
};

struct HWND__ {
    int unused;
};

struct IShellFolder {
    struct IShellFolderVtbl *lpVtbl;
};

struct IShellFolderVtbl {
    HRESULT (*QueryInterface)(struct IShellFolder *, IID *, void **);
    ULONG (*AddRef)(struct IShellFolder *);
    ULONG (*Release)(struct IShellFolder *);
    HRESULT (*ParseDisplayName)(struct IShellFolder *, HWND, struct IBindCtx *, LPWSTR, ULONG *, LPITEMIDLIST *, ULONG *);
    HRESULT (*EnumObjects)(struct IShellFolder *, HWND, SHCONTF, struct IEnumIDList **);
    HRESULT (*BindToObject)(struct IShellFolder *, LPCITEMIDLIST, struct IBindCtx *, IID *, void **);
    HRESULT (*BindToStorage)(struct IShellFolder *, LPCITEMIDLIST, struct IBindCtx *, IID *, void **);
    HRESULT (*CompareIDs)(struct IShellFolder *, LPARAM, LPCITEMIDLIST, LPCITEMIDLIST);
    HRESULT (*CreateViewObject)(struct IShellFolder *, HWND, IID *, void **);
    HRESULT (*GetAttributesOf)(struct IShellFolder *, UINT, LPCITEMIDLIST *, SFGAOF *);
    HRESULT (*GetUIObjectOf)(struct IShellFolder *, HWND, UINT, LPCITEMIDLIST *, IID *, UINT *, void **);
    HRESULT (*GetDisplayNameOf)(struct IShellFolder *, LPCITEMIDLIST, SHGDNF, STRRET *);
    HRESULT (*SetNameOf)(struct IShellFolder *, HWND, LPCITEMIDLIST, LPCWSTR, SHGDNF, LPITEMIDLIST *);
};

struct IRunningObjectTable {
    struct IRunningObjectTableVtbl *lpVtbl;
};

struct IUnknownVtbl {
    HRESULT (*QueryInterface)(struct IUnknown *, IID *, void **);
    ULONG (*AddRef)(struct IUnknown *);
    ULONG (*Release)(struct IUnknown *);
};

struct IUnknown {
    struct IUnknownVtbl *lpVtbl;
};

union _union_3888 {
    LPWSTR pOleStr;
    UINT uOffset;
    char cStr[260];
};

struct _STRRET {
    UINT uType;
    union _union_3888 u;
};

struct IEnumMoniker {
    struct IEnumMonikerVtbl *lpVtbl;
};

typedef struct _cpinfo _cpinfo, *P_cpinfo;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo *LPCPINFO;

typedef struct _MEMORYSTATUSEX _MEMORYSTATUSEX, *P_MEMORYSTATUSEX;

typedef ULONGLONG DWORDLONG;

struct _MEMORYSTATUSEX {
    DWORD dwLength;
    DWORD dwMemoryLoad;
    DWORDLONG ullTotalPhys;
    DWORDLONG ullAvailPhys;
    DWORDLONG ullTotalPageFile;
    DWORDLONG ullAvailPageFile;
    DWORDLONG ullTotalVirtual;
    DWORDLONG ullAvailVirtual;
    DWORDLONG ullAvailExtendedVirtual;
};

typedef struct _SYSTEM_INFO _SYSTEM_INFO, *P_SYSTEM_INFO;

typedef struct _SYSTEM_INFO *LPSYSTEM_INFO;

typedef union _union_530 _union_530, *P_union_530;

typedef void *LPVOID;

typedef ulong ULONG_PTR;

typedef ULONG_PTR DWORD_PTR;

typedef ushort WORD;

typedef struct _struct_531 _struct_531, *P_struct_531;

struct _struct_531 {
    WORD wProcessorArchitecture;
    WORD wReserved;
};

union _union_530 {
    DWORD dwOemId;
    struct _struct_531 s;
};

struct _SYSTEM_INFO {
    union _union_530 u;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef union _union_518 _union_518, *P_union_518;

typedef void *HANDLE;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void *PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

typedef struct _SYSTEMTIME SYSTEMTIME;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef struct _TIME_ZONE_INFORMATION _TIME_ZONE_INFORMATION, *P_TIME_ZONE_INFORMATION;

typedef struct _TIME_ZONE_INFORMATION *LPTIME_ZONE_INFORMATION;

struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[32];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[32];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
};

typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

typedef BYTE *LPBYTE;

struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _STARTUPINFOW *LPSTARTUPINFOW;

typedef struct _WIN32_FIND_DATAW _WIN32_FIND_DATAW, *P_WIN32_FIND_DATAW;

typedef struct _WIN32_FIND_DATAW *LPWIN32_FIND_DATAW;

struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR cFileName[260];
    WCHAR cAlternateFileName[14];
};

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _MEMORYSTATUSEX *LPMEMORYSTATUSEX;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef struct _PROCESS_INFORMATION _PROCESS_INFORMATION, *P_PROCESS_INFORMATION;

struct _PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    DWORD dwProcessId;
    DWORD dwThreadId;
};

typedef struct _PROCESS_INFORMATION *LPPROCESS_INFORMATION;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

typedef HINSTANCE HMODULE;

typedef BOOL (*ENUMRESNAMEPROCW)(HMODULE, LPCWSTR, LPWSTR, LONG_PTR);

struct HINSTANCE__ {
    int unused;
};

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT *PCONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _SYSTEMTIME *LPSYSTEMTIME;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct tagFUNCDESC tagFUNCDESC, *PtagFUNCDESC;

typedef LONG DISPID;

typedef DISPID MEMBERID;

typedef LONG SCODE;

typedef struct tagELEMDESC tagELEMDESC, *PtagELEMDESC;

typedef struct tagELEMDESC ELEMDESC;

typedef enum tagFUNCKIND {
    FUNC_VIRTUAL=0,
    FUNC_PUREVIRTUAL=1,
    FUNC_NONVIRTUAL=2,
    FUNC_STATIC=3,
    FUNC_DISPATCH=4
} tagFUNCKIND;

typedef enum tagFUNCKIND FUNCKIND;

typedef enum tagINVOKEKIND {
    INVOKE_FUNC=1,
    INVOKE_PROPERTYGET=2,
    INVOKE_PROPERTYPUT=4,
    INVOKE_PROPERTYPUTREF=8
} tagINVOKEKIND;

typedef enum tagINVOKEKIND INVOKEKIND;

typedef enum tagCALLCONV {
    CC_FASTCALL=0,
    CC_CDECL=1,
    CC_MSCPASCAL=2,
    CC_PASCAL=3,
    CC_MACPASCAL=4,
    CC_STDCALL=5,
    CC_FPFASTCALL=6,
    CC_SYSCALL=7,
    CC_MPWCDECL=8,
    CC_MPWPASCAL=9,
    CC_MAX=10
} tagCALLCONV;

typedef enum tagCALLCONV CALLCONV;

typedef short SHORT;

typedef struct tagTYPEDESC tagTYPEDESC, *PtagTYPEDESC;

typedef struct tagTYPEDESC TYPEDESC;

typedef union _union_2702 _union_2702, *P_union_2702;

typedef union _union_2691 _union_2691, *P_union_2691;

typedef ushort VARTYPE;

typedef struct tagIDLDESC tagIDLDESC, *PtagIDLDESC;

typedef struct tagIDLDESC IDLDESC;

typedef struct tagPARAMDESC tagPARAMDESC, *PtagPARAMDESC;

typedef struct tagPARAMDESC PARAMDESC;

typedef struct tagARRAYDESC tagARRAYDESC, *PtagARRAYDESC;

typedef DWORD HREFTYPE;

typedef struct tagPARAMDESCEX tagPARAMDESCEX, *PtagPARAMDESCEX;

typedef struct tagPARAMDESCEX *LPPARAMDESCEX;

typedef struct tagSAFEARRAYBOUND tagSAFEARRAYBOUND, *PtagSAFEARRAYBOUND;

typedef struct tagSAFEARRAYBOUND SAFEARRAYBOUND;

typedef struct tagVARIANT tagVARIANT, *PtagVARIANT;

typedef struct tagVARIANT VARIANT;

typedef VARIANT VARIANTARG;

typedef union _union_2683 _union_2683, *P_union_2683;

typedef struct __tagVARIANT __tagVARIANT, *P__tagVARIANT;

typedef struct tagDEC tagDEC, *PtagDEC;

typedef struct tagDEC DECIMAL;

typedef union _union_2685 _union_2685, *P_union_2685;

typedef union _union_1695 _union_1695, *P_union_1695;

typedef union _union_1697 _union_1697, *P_union_1697;

typedef float FLOAT;

typedef double DOUBLE;

typedef short VARIANT_BOOL;

typedef union tagCY tagCY, *PtagCY;

typedef union tagCY CY;

typedef double DATE;

typedef OLECHAR *BSTR;

typedef struct IDispatch IDispatch, *PIDispatch;

typedef struct tagSAFEARRAY tagSAFEARRAY, *PtagSAFEARRAY;

typedef struct tagSAFEARRAY SAFEARRAY;

typedef char CHAR;

typedef int INT;

typedef struct __tagBRECORD __tagBRECORD, *P__tagBRECORD;

typedef struct _struct_1696 _struct_1696, *P_struct_1696;

typedef struct _struct_1698 _struct_1698, *P_struct_1698;

typedef struct _struct_1693 _struct_1693, *P_struct_1693;

typedef struct IDispatchVtbl IDispatchVtbl, *PIDispatchVtbl;

typedef DWORD LCID;

typedef struct ITypeInfo ITypeInfo, *PITypeInfo;

typedef struct tagDISPPARAMS tagDISPPARAMS, *PtagDISPPARAMS;

typedef struct tagDISPPARAMS DISPPARAMS;

typedef struct tagEXCEPINFO tagEXCEPINFO, *PtagEXCEPINFO;

typedef struct tagEXCEPINFO EXCEPINFO;

typedef struct IRecordInfo IRecordInfo, *PIRecordInfo;

typedef struct ITypeInfoVtbl ITypeInfoVtbl, *PITypeInfoVtbl;

typedef struct tagTYPEATTR tagTYPEATTR, *PtagTYPEATTR;

typedef struct tagTYPEATTR TYPEATTR;

typedef struct ITypeComp ITypeComp, *PITypeComp;

typedef struct tagFUNCDESC FUNCDESC;

typedef struct tagVARDESC tagVARDESC, *PtagVARDESC;

typedef struct tagVARDESC VARDESC;

typedef struct ITypeLib ITypeLib, *PITypeLib;

typedef struct IRecordInfoVtbl IRecordInfoVtbl, *PIRecordInfoVtbl;

typedef OLECHAR *LPCOLESTR;

typedef enum tagTYPEKIND {
    TKIND_ENUM=0,
    TKIND_RECORD=1,
    TKIND_MODULE=2,
    TKIND_INTERFACE=3,
    TKIND_DISPATCH=4,
    TKIND_COCLASS=5,
    TKIND_ALIAS=6,
    TKIND_UNION=7,
    TKIND_MAX=8
} tagTYPEKIND;

typedef enum tagTYPEKIND TYPEKIND;

typedef struct ITypeCompVtbl ITypeCompVtbl, *PITypeCompVtbl;

typedef enum tagDESCKIND {
    DESCKIND_NONE=0,
    DESCKIND_FUNCDESC=1,
    DESCKIND_VARDESC=2,
    DESCKIND_TYPECOMP=3,
    DESCKIND_IMPLICITAPPOBJ=4,
    DESCKIND_MAX=5
} tagDESCKIND;

typedef enum tagDESCKIND DESCKIND;

typedef union tagBINDPTR tagBINDPTR, *PtagBINDPTR;

typedef union tagBINDPTR BINDPTR;

typedef union _union_2711 _union_2711, *P_union_2711;

typedef enum tagVARKIND {
    VAR_PERINSTANCE=0,
    VAR_STATIC=1,
    VAR_CONST=2,
    VAR_DISPATCH=3
} tagVARKIND;

typedef enum tagVARKIND VARKIND;

typedef struct ITypeLibVtbl ITypeLibVtbl, *PITypeLibVtbl;

typedef struct tagTLIBATTR tagTLIBATTR, *PtagTLIBATTR;

typedef struct tagTLIBATTR TLIBATTR;

typedef enum tagSYSKIND {
    SYS_WIN16=0,
    SYS_WIN32=1,
    SYS_MAC=2,
    SYS_WIN64=3
} tagSYSKIND;

typedef enum tagSYSKIND SYSKIND;

struct _struct_1693 {
    ulong Lo;
    long Hi;
};

union tagCY {
    struct _struct_1693 s;
    LONGLONG int64;
};

struct _struct_1698 {
    ULONG Lo32;
    ULONG Mid32;
};

union _union_1697 {
    struct _struct_1698 s2;
    ULONGLONG Lo64;
};

struct _struct_1696 {
    BYTE scale;
    BYTE sign;
};

union _union_1695 {
    struct _struct_1696 s;
    USHORT signscale;
};

struct tagDEC {
    USHORT wReserved;
    union _union_1695 u;
    ULONG Hi32;
    union _union_1697 u2;
};

struct __tagBRECORD {
    PVOID pvRecord;
    struct IRecordInfo *pRecInfo;
};

union _union_2685 {
    LONGLONG llVal;
    LONG lVal;
    BYTE bVal;
    SHORT iVal;
    FLOAT fltVal;
    DOUBLE dblVal;
    VARIANT_BOOL boolVal;
    SCODE scode;
    CY cyVal;
    DATE date;
    BSTR bstrVal;
    struct IUnknown *punkVal;
    struct IDispatch *pdispVal;
    SAFEARRAY *parray;
    BYTE *pbVal;
    SHORT *piVal;
    LONG *plVal;
    LONGLONG *pllVal;
    FLOAT *pfltVal;
    DOUBLE *pdblVal;
    VARIANT_BOOL *pboolVal;
    SCODE *pscode;
    CY *pcyVal;
    DATE *pdate;
    BSTR *pbstrVal;
    struct IUnknown **ppunkVal;
    struct IDispatch **ppdispVal;
    SAFEARRAY **pparray;
    VARIANT *pvarVal;
    PVOID byref;
    CHAR cVal;
    USHORT uiVal;
    ULONG ulVal;
    ULONGLONG ullVal;
    INT intVal;
    UINT uintVal;
    DECIMAL *pdecVal;
    CHAR *pcVal;
    USHORT *puiVal;
    ULONG *pulVal;
    ULONGLONG *pullVal;
    INT *pintVal;
    UINT *puintVal;
    struct __tagBRECORD brecVal;
};

struct __tagVARIANT {
    VARTYPE vt;
    WORD wReserved1;
    WORD wReserved2;
    WORD wReserved3;
    union _union_2685 n3;
};

union _union_2683 {
    struct __tagVARIANT n2;
    DECIMAL decVal;
};

union _union_2691 {
    struct tagTYPEDESC *lptdesc;
    struct tagARRAYDESC *lpadesc;
    HREFTYPE hreftype;
};

struct tagTYPEDESC {
    union _union_2691 u;
    VARTYPE vt;
};

struct tagIDLDESC {
    ULONG_PTR dwReserved;
    USHORT wIDLFlags;
};

struct tagPARAMDESC {
    LPPARAMDESCEX pparamdescex;
    USHORT wParamFlags;
};

union _union_2702 {
    IDLDESC idldesc;
    PARAMDESC paramdesc;
};

struct tagELEMDESC {
    TYPEDESC tdesc;
    union _union_2702 u;
};

struct tagFUNCDESC {
    MEMBERID memid;
    SCODE *lprgscode;
    ELEMDESC *lprgelemdescParam;
    FUNCKIND funckind;
    INVOKEKIND invkind;
    CALLCONV callconv;
    SHORT cParams;
    SHORT cParamsOpt;
    SHORT oVft;
    SHORT cScodes;
    ELEMDESC elemdescFunc;
    WORD wFuncFlags;
};

struct tagVARIANT {
    union _union_2683 n1;
};

struct tagPARAMDESCEX {
    ULONG cBytes;
    VARIANTARG varDefaultValue;
};

union _union_2711 {
    ULONG oInst;
    VARIANT *lpvarValue;
};

struct tagVARDESC {
    MEMBERID memid;
    LPOLESTR lpstrSchema;
    union _union_2711 u;
    ELEMDESC elemdescVar;
    WORD wVarFlags;
    VARKIND varkind;
};

struct ITypeCompVtbl {
    HRESULT (*QueryInterface)(struct ITypeComp *, IID *, void **);
    ULONG (*AddRef)(struct ITypeComp *);
    ULONG (*Release)(struct ITypeComp *);
    HRESULT (*Bind)(struct ITypeComp *, LPOLESTR, ULONG, WORD, struct ITypeInfo **, DESCKIND *, BINDPTR *);
    HRESULT (*BindType)(struct ITypeComp *, LPOLESTR, ULONG, struct ITypeInfo **, struct ITypeComp **);
};

struct tagSAFEARRAYBOUND {
    ULONG cElements;
    LONG lLbound;
};

struct tagSAFEARRAY {
    USHORT cDims;
    USHORT fFeatures;
    ULONG cbElements;
    ULONG cLocks;
    PVOID pvData;
    SAFEARRAYBOUND rgsabound[1];
};

struct ITypeInfoVtbl {
    HRESULT (*QueryInterface)(struct ITypeInfo *, IID *, void **);
    ULONG (*AddRef)(struct ITypeInfo *);
    ULONG (*Release)(struct ITypeInfo *);
    HRESULT (*GetTypeAttr)(struct ITypeInfo *, TYPEATTR **);
    HRESULT (*GetTypeComp)(struct ITypeInfo *, struct ITypeComp **);
    HRESULT (*GetFuncDesc)(struct ITypeInfo *, UINT, FUNCDESC **);
    HRESULT (*GetVarDesc)(struct ITypeInfo *, UINT, VARDESC **);
    HRESULT (*GetNames)(struct ITypeInfo *, MEMBERID, BSTR *, UINT, UINT *);
    HRESULT (*GetRefTypeOfImplType)(struct ITypeInfo *, UINT, HREFTYPE *);
    HRESULT (*GetImplTypeFlags)(struct ITypeInfo *, UINT, INT *);
    HRESULT (*GetIDsOfNames)(struct ITypeInfo *, LPOLESTR *, UINT, MEMBERID *);
    HRESULT (*Invoke)(struct ITypeInfo *, PVOID, MEMBERID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
    HRESULT (*GetDocumentation)(struct ITypeInfo *, MEMBERID, BSTR *, BSTR *, DWORD *, BSTR *);
    HRESULT (*GetDllEntry)(struct ITypeInfo *, MEMBERID, INVOKEKIND, BSTR *, BSTR *, WORD *);
    HRESULT (*GetRefTypeInfo)(struct ITypeInfo *, HREFTYPE, struct ITypeInfo **);
    HRESULT (*AddressOfMember)(struct ITypeInfo *, MEMBERID, INVOKEKIND, PVOID *);
    HRESULT (*CreateInstance)(struct ITypeInfo *, struct IUnknown *, IID *, PVOID *);
    HRESULT (*GetMops)(struct ITypeInfo *, MEMBERID, BSTR *);
    HRESULT (*GetContainingTypeLib)(struct ITypeInfo *, struct ITypeLib **, UINT *);
    void (*ReleaseTypeAttr)(struct ITypeInfo *, TYPEATTR *);
    void (*ReleaseFuncDesc)(struct ITypeInfo *, FUNCDESC *);
    void (*ReleaseVarDesc)(struct ITypeInfo *, VARDESC *);
};

struct ITypeLibVtbl {
    HRESULT (*QueryInterface)(struct ITypeLib *, IID *, void **);
    ULONG (*AddRef)(struct ITypeLib *);
    ULONG (*Release)(struct ITypeLib *);
    UINT (*GetTypeInfoCount)(struct ITypeLib *);
    HRESULT (*GetTypeInfo)(struct ITypeLib *, UINT, struct ITypeInfo **);
    HRESULT (*GetTypeInfoType)(struct ITypeLib *, UINT, TYPEKIND *);
    HRESULT (*GetTypeInfoOfGuid)(struct ITypeLib *, GUID *, struct ITypeInfo **);
    HRESULT (*GetLibAttr)(struct ITypeLib *, TLIBATTR **);
    HRESULT (*GetTypeComp)(struct ITypeLib *, struct ITypeComp **);
    HRESULT (*GetDocumentation)(struct ITypeLib *, INT, BSTR *, BSTR *, DWORD *, BSTR *);
    HRESULT (*IsName)(struct ITypeLib *, LPOLESTR, ULONG, BOOL *);
    HRESULT (*FindName)(struct ITypeLib *, LPOLESTR, ULONG, struct ITypeInfo **, MEMBERID *, USHORT *);
    void (*ReleaseTLibAttr)(struct ITypeLib *, TLIBATTR *);
};

struct tagTLIBATTR {
    GUID guid;
    LCID lcid;
    SYSKIND syskind;
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    WORD wLibFlags;
};

struct tagARRAYDESC {
    TYPEDESC tdescElem;
    USHORT cDims;
    SAFEARRAYBOUND rgbounds[1];
};

struct ITypeComp {
    struct ITypeCompVtbl *lpVtbl;
};

struct IRecordInfo {
    struct IRecordInfoVtbl *lpVtbl;
};

struct tagTYPEATTR {
    GUID guid;
    LCID lcid;
    DWORD dwReserved;
    MEMBERID memidConstructor;
    MEMBERID memidDestructor;
    LPOLESTR lpstrSchema;
    ULONG cbSizeInstance;
    TYPEKIND typekind;
    WORD cFuncs;
    WORD cVars;
    WORD cImplTypes;
    WORD cbSizeVft;
    WORD cbAlignment;
    WORD wTypeFlags;
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    TYPEDESC tdescAlias;
    IDLDESC idldescType;
};

struct IRecordInfoVtbl {
    HRESULT (*QueryInterface)(struct IRecordInfo *, IID *, void **);
    ULONG (*AddRef)(struct IRecordInfo *);
    ULONG (*Release)(struct IRecordInfo *);
    HRESULT (*RecordInit)(struct IRecordInfo *, PVOID);
    HRESULT (*RecordClear)(struct IRecordInfo *, PVOID);
    HRESULT (*RecordCopy)(struct IRecordInfo *, PVOID, PVOID);
    HRESULT (*GetGuid)(struct IRecordInfo *, GUID *);
    HRESULT (*GetName)(struct IRecordInfo *, BSTR *);
    HRESULT (*GetSize)(struct IRecordInfo *, ULONG *);
    HRESULT (*GetTypeInfo)(struct IRecordInfo *, struct ITypeInfo **);
    HRESULT (*GetField)(struct IRecordInfo *, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*GetFieldNoCopy)(struct IRecordInfo *, PVOID, LPCOLESTR, VARIANT *, PVOID *);
    HRESULT (*PutField)(struct IRecordInfo *, ULONG, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*PutFieldNoCopy)(struct IRecordInfo *, ULONG, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*GetFieldNames)(struct IRecordInfo *, ULONG *, BSTR *);
    BOOL (*IsMatchingType)(struct IRecordInfo *, struct IRecordInfo *);
    PVOID (*RecordCreate)(struct IRecordInfo *);
    HRESULT (*RecordCreateCopy)(struct IRecordInfo *, PVOID, PVOID *);
    HRESULT (*RecordDestroy)(struct IRecordInfo *, PVOID);
};

struct tagDISPPARAMS {
    VARIANTARG *rgvarg;
    DISPID *rgdispidNamedArgs;
    UINT cArgs;
    UINT cNamedArgs;
};

union tagBINDPTR {
    FUNCDESC *lpfuncdesc;
    VARDESC *lpvardesc;
    struct ITypeComp *lptcomp;
};

struct IDispatch {
    struct IDispatchVtbl *lpVtbl;
};

struct IDispatchVtbl {
    HRESULT (*QueryInterface)(struct IDispatch *, IID *, void **);
    ULONG (*AddRef)(struct IDispatch *);
    ULONG (*Release)(struct IDispatch *);
    HRESULT (*GetTypeInfoCount)(struct IDispatch *, UINT *);
    HRESULT (*GetTypeInfo)(struct IDispatch *, UINT, LCID, struct ITypeInfo **);
    HRESULT (*GetIDsOfNames)(struct IDispatch *, IID *, LPOLESTR *, UINT, LCID, DISPID *);
    HRESULT (*Invoke)(struct IDispatch *, DISPID, IID *, LCID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
};

struct ITypeLib {
    struct ITypeLibVtbl *lpVtbl;
};

struct ITypeInfo {
    struct ITypeInfoVtbl *lpVtbl;
};

struct tagEXCEPINFO {
    WORD wCode;
    WORD wReserved;
    BSTR bstrSource;
    BSTR bstrDescription;
    BSTR bstrHelpFile;
    DWORD dwHelpContext;
    PVOID pvReserved;
    HRESULT (*pfnDeferredFillIn)(struct tagEXCEPINFO *);
    SCODE scode;
};

typedef struct tagMULTI_QI tagMULTI_QI, *PtagMULTI_QI;

struct tagMULTI_QI {
    IID *pIID;
    struct IUnknown *pItf;
    HRESULT hr;
};

typedef struct _COSERVERINFO _COSERVERINFO, *P_COSERVERINFO;

typedef struct _COSERVERINFO COSERVERINFO;

typedef struct _COAUTHINFO _COAUTHINFO, *P_COAUTHINFO;

typedef struct _COAUTHINFO COAUTHINFO;

typedef struct _COAUTHIDENTITY _COAUTHIDENTITY, *P_COAUTHIDENTITY;

typedef struct _COAUTHIDENTITY COAUTHIDENTITY;

struct _COAUTHINFO {
    DWORD dwAuthnSvc;
    DWORD dwAuthzSvc;
    LPWSTR pwszServerPrincName;
    DWORD dwAuthnLevel;
    DWORD dwImpersonationLevel;
    COAUTHIDENTITY *pAuthIdentityData;
    DWORD dwCapabilities;
};

struct _COAUTHIDENTITY {
    USHORT *User;
    ULONG UserLength;
    USHORT *Domain;
    ULONG DomainLength;
    USHORT *Password;
    ULONG PasswordLength;
    ULONG Flags;
};

struct _COSERVERINFO {
    DWORD dwReserved1;
    LPWSTR pwszName;
    COAUTHINFO *pAuthInfo;
    DWORD dwReserved2;
};

typedef struct IStream *LPSTREAM;

typedef struct IMoniker *LPMONIKER;

typedef struct IRunningObjectTable *LPRUNNINGOBJECTTABLE;

typedef struct tagMULTI_QI MULTI_QI;

typedef struct tagSOLE_AUTHENTICATION_SERVICE tagSOLE_AUTHENTICATION_SERVICE, *PtagSOLE_AUTHENTICATION_SERVICE;

struct tagSOLE_AUTHENTICATION_SERVICE {
    DWORD dwAuthnSvc;
    DWORD dwAuthzSvc;
    OLECHAR *pPrincipalName;
    HRESULT hr;
};

typedef struct tagSOLE_AUTHENTICATION_SERVICE SOLE_AUTHENTICATION_SERVICE;

typedef struct IBindCtx *LPBC;

typedef BSTR *LPBSTR;

typedef struct IOleInPlaceActiveObjectVtbl IOleInPlaceActiveObjectVtbl, *PIOleInPlaceActiveObjectVtbl;

typedef struct IOleInPlaceActiveObject IOleInPlaceActiveObject, *PIOleInPlaceActiveObject;

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG *LPMSG;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

typedef RECT *LPCRECT;

typedef struct IOleInPlaceUIWindow IOleInPlaceUIWindow, *PIOleInPlaceUIWindow;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

typedef struct IOleInPlaceUIWindowVtbl IOleInPlaceUIWindowVtbl, *PIOleInPlaceUIWindowVtbl;

typedef struct tagRECT *LPRECT;

typedef LPCRECT LPCBORDERWIDTHS;

struct tagPOINT {
    LONG x;
    LONG y;
};

struct IOleInPlaceActiveObjectVtbl {
    HRESULT (*QueryInterface)(struct IOleInPlaceActiveObject *, IID *, void **);
    ULONG (*AddRef)(struct IOleInPlaceActiveObject *);
    ULONG (*Release)(struct IOleInPlaceActiveObject *);
    HRESULT (*GetWindow)(struct IOleInPlaceActiveObject *, HWND *);
    HRESULT (*ContextSensitiveHelp)(struct IOleInPlaceActiveObject *, BOOL);
    HRESULT (*TranslateAcceleratorA)(struct IOleInPlaceActiveObject *, LPMSG);
    HRESULT (*OnFrameWindowActivate)(struct IOleInPlaceActiveObject *, BOOL);
    HRESULT (*OnDocWindowActivate)(struct IOleInPlaceActiveObject *, BOOL);
    HRESULT (*ResizeBorder)(struct IOleInPlaceActiveObject *, LPCRECT, struct IOleInPlaceUIWindow *, BOOL);
    HRESULT (*EnableModeless)(struct IOleInPlaceActiveObject *, BOOL);
};

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

struct IOleInPlaceUIWindow {
    struct IOleInPlaceUIWindowVtbl *lpVtbl;
};

struct IOleInPlaceUIWindowVtbl {
    HRESULT (*QueryInterface)(struct IOleInPlaceUIWindow *, IID *, void **);
    ULONG (*AddRef)(struct IOleInPlaceUIWindow *);
    ULONG (*Release)(struct IOleInPlaceUIWindow *);
    HRESULT (*GetWindow)(struct IOleInPlaceUIWindow *, HWND *);
    HRESULT (*ContextSensitiveHelp)(struct IOleInPlaceUIWindow *, BOOL);
    HRESULT (*GetBorder)(struct IOleInPlaceUIWindow *, LPRECT);
    HRESULT (*RequestBorderSpace)(struct IOleInPlaceUIWindow *, LPCBORDERWIDTHS);
    HRESULT (*SetBorderSpace)(struct IOleInPlaceUIWindow *, LPCBORDERWIDTHS);
    HRESULT (*SetActiveObject)(struct IOleInPlaceUIWindow *, struct IOleInPlaceActiveObject *, LPCOLESTR);
};

struct IOleInPlaceActiveObject {
    struct IOleInPlaceActiveObjectVtbl *lpVtbl;
};

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

typedef struct IOleInPlaceFrame IOleInPlaceFrame, *PIOleInPlaceFrame;

typedef struct IOleInPlaceFrameVtbl IOleInPlaceFrameVtbl, *PIOleInPlaceFrameVtbl;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ *HMENU;

typedef struct tagOleMenuGroupWidths tagOleMenuGroupWidths, *PtagOleMenuGroupWidths;

typedef struct tagOleMenuGroupWidths *LPOLEMENUGROUPWIDTHS;

typedef HANDLE HGLOBAL;

typedef HGLOBAL HOLEMENU;

struct HMENU__ {
    int unused;
};

struct tagOleMenuGroupWidths {
    LONG width[6];
};

struct IOleInPlaceFrame {
    struct IOleInPlaceFrameVtbl *lpVtbl;
};

struct IOleInPlaceFrameVtbl {
    HRESULT (*QueryInterface)(struct IOleInPlaceFrame *, IID *, void **);
    ULONG (*AddRef)(struct IOleInPlaceFrame *);
    ULONG (*Release)(struct IOleInPlaceFrame *);
    HRESULT (*GetWindow)(struct IOleInPlaceFrame *, HWND *);
    HRESULT (*ContextSensitiveHelp)(struct IOleInPlaceFrame *, BOOL);
    HRESULT (*GetBorder)(struct IOleInPlaceFrame *, LPRECT);
    HRESULT (*RequestBorderSpace)(struct IOleInPlaceFrame *, LPCBORDERWIDTHS);
    HRESULT (*SetBorderSpace)(struct IOleInPlaceFrame *, LPCBORDERWIDTHS);
    HRESULT (*SetActiveObject)(struct IOleInPlaceFrame *, struct IOleInPlaceActiveObject *, LPCOLESTR);
    HRESULT (*InsertMenus)(struct IOleInPlaceFrame *, HMENU, LPOLEMENUGROUPWIDTHS);
    HRESULT (*SetMenu)(struct IOleInPlaceFrame *, HMENU, HOLEMENU, HWND);
    HRESULT (*RemoveMenus)(struct IOleInPlaceFrame *, HMENU);
    HRESULT (*SetStatusText)(struct IOleInPlaceFrame *, LPCOLESTR);
    HRESULT (*EnableModeless)(struct IOleInPlaceFrame *, BOOL);
    HRESULT (*TranslateAcceleratorA)(struct IOleInPlaceFrame *, LPMSG, WORD);
};

typedef struct IOleInPlaceFrame *LPOLEINPLACEFRAME;

typedef struct IOleInPlaceActiveObject *LPOLEINPLACEACTIVEOBJECT;

typedef struct _strflt _strflt, *P_strflt;

struct _strflt {
    int sign;
    int decpt;
    int flag;
    char *mantissa;
};

typedef struct _flt _flt, *P_flt;

struct _flt {
    int flags;
    int nbytes;
    long lval;
    double dval;
};

typedef struct _strflt *STRFLT;

typedef enum enum_3272 {
    INTRNCVT_OK=0,
    INTRNCVT_OVERFLOW=1,
    INTRNCVT_UNDERFLOW=2
} enum_3272;

typedef enum enum_3272 INTRNCVT_STATUS;

typedef struct _flt *FLT;

typedef BYTE UCHAR;

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef struct _iobuf FILE;

typedef struct _CONSOLE_READCONSOLE_CONTROL _CONSOLE_READCONSOLE_CONTROL, *P_CONSOLE_READCONSOLE_CONTROL;


// WARNING! conflicting data type names: /WinDef.h/ULONG - /wtypes.h/ULONG

struct _CONSOLE_READCONSOLE_CONTROL {
    ULONG nLength;
    ULONG nInitialChars;
    ULONG dwCtrlWakeupMask;
    ULONG dwControlKeyState;
};

typedef struct _CONSOLE_READCONSOLE_CONTROL *PCONSOLE_READCONSOLE_CONTROL;

typedef ULONG IPAddr;

typedef struct ip_option_information ip_option_information, *Pip_option_information;


// WARNING! conflicting data type names: /WinDef.h/UCHAR - /winsmcrd.h/UCHAR

typedef UCHAR *PUCHAR;

struct ip_option_information {
    UCHAR Ttl;
    UCHAR Tos;
    UCHAR Flags;
    UCHAR OptionsSize;
    PUCHAR OptionsData;
};

typedef struct ip_option_information *PIP_OPTION_INFORMATION;

typedef char *va_list;

typedef uint uintptr_t;

typedef struct _NETRESOURCEW _NETRESOURCEW, *P_NETRESOURCEW;

struct _NETRESOURCEW {
    DWORD dwScope;
    DWORD dwType;
    DWORD dwDisplayType;
    DWORD dwUsage;
    LPWSTR lpLocalName;
    LPWSTR lpRemoteName;
    LPWSTR lpComment;
    LPWSTR lpProvider;
};

typedef struct _NETRESOURCEW *LPNETRESOURCEW;

typedef struct tagOFNW tagOFNW, *PtagOFNW;

typedef UINT_PTR (*LPOFNHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

struct tagOFNW {
    DWORD lStructSize;
    HWND hwndOwner;
    HINSTANCE hInstance;
    LPCWSTR lpstrFilter;
    LPWSTR lpstrCustomFilter;
    DWORD nMaxCustFilter;
    DWORD nFilterIndex;
    LPWSTR lpstrFile;
    DWORD nMaxFile;
    LPWSTR lpstrFileTitle;
    DWORD nMaxFileTitle;
    LPCWSTR lpstrInitialDir;
    LPCWSTR lpstrTitle;
    DWORD Flags;
    WORD nFileOffset;
    WORD nFileExtension;
    LPCWSTR lpstrDefExt;
    LPARAM lCustData;
    LPOFNHOOKPROC lpfnHook;
    LPCWSTR lpTemplateName;
    void *pvReserved;
    DWORD dwReserved;
    DWORD FlagsEx;
};

typedef struct tagOFNW *LPOPENFILENAMEW;

typedef struct lconv lconv, *Plconv;

struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t *_W_decimal_point;
    wchar_t *_W_thousands_sep;
    wchar_t *_W_int_curr_symbol;
    wchar_t *_W_currency_symbol;
    wchar_t *_W_mon_decimal_point;
    wchar_t *_W_mon_thousands_sep;
    wchar_t *_W_positive_sign;
    wchar_t *_W_negative_sign;
};

typedef uint size_t;

typedef ushort wint_t;

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct *pthreadlocinfo;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

struct __lc_time_data {
    char *wday_abbr[7];
    char *wday[7];
    char *month_abbr[12];
    char *month[12];
    char *ampm[2];
    char *ww_sdatefmt;
    char *ww_ldatefmt;
    char *ww_timefmt;
    int ww_caltype;
    int refcount;
    wchar_t *_W_wday_abbr[7];
    wchar_t *_W_wday[7];
    wchar_t *_W_month_abbr[12];
    wchar_t *_W_month[12];
    wchar_t *_W_ampm[2];
    wchar_t *_W_ww_sdatefmt;
    wchar_t *_W_ww_ldatefmt;
    wchar_t *_W_ww_timefmt;
    wchar_t *_W_ww_locale_name;
};

struct localerefcount {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
};

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int *lconv_intl_refcount;
    int *lconv_num_refcount;
    int *lconv_mon_refcount;
    struct lconv *lconv;
    int *ctype1_refcount;
    ushort *ctype1;
    ushort *pctype;
    uchar *pclmap;
    uchar *pcumap;
    struct __lc_time_data *lc_time_curr;
    wchar_t *locale_name[6];
};

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct *pthreadmbcinfo;

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t *mblocalename;
};

typedef int errno_t;

typedef int intptr_t;

typedef struct localeinfo_struct *_locale_t;

typedef longlong __time64_t;

typedef size_t rsize_t;

typedef ushort wctype_t;

typedef struct _browseinfoW _browseinfoW, *P_browseinfoW;

typedef int (*BFFCALLBACK)(HWND, UINT, LPARAM, LPARAM);

struct _browseinfoW {
    HWND hwndOwner;
    LPCITEMIDLIST pidlRoot;
    LPWSTR pszDisplayName;
    LPCWSTR lpszTitle;
    UINT ulFlags;
    BFFCALLBACK lpfn;
    LPARAM lParam;
    int iImage;
};

typedef struct _browseinfoW *LPBROWSEINFOW;

typedef struct tagCURSORINFO tagCURSORINFO, *PtagCURSORINFO;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ *HICON;

typedef HICON HCURSOR;

struct tagCURSORINFO {
    DWORD cbSize;
    DWORD flags;
    HCURSOR hCursor;
    POINT ptScreenPos;
};

struct HICON__ {
    int unused;
};

typedef struct tagMOUSEINPUT tagMOUSEINPUT, *PtagMOUSEINPUT;

typedef struct tagMOUSEINPUT MOUSEINPUT;

struct tagMOUSEINPUT {
    LONG dx;
    LONG dy;
    DWORD mouseData;
    DWORD dwFlags;
    DWORD time;
    ULONG_PTR dwExtraInfo;
};

typedef struct tagINPUT tagINPUT, *PtagINPUT;

typedef union _union_859 _union_859, *P_union_859;

typedef struct tagKEYBDINPUT tagKEYBDINPUT, *PtagKEYBDINPUT;

typedef struct tagKEYBDINPUT KEYBDINPUT;

typedef struct tagHARDWAREINPUT tagHARDWAREINPUT, *PtagHARDWAREINPUT;

typedef struct tagHARDWAREINPUT HARDWAREINPUT;

struct tagKEYBDINPUT {
    WORD wVk;
    WORD wScan;
    DWORD dwFlags;
    DWORD time;
    ULONG_PTR dwExtraInfo;
};

struct tagHARDWAREINPUT {
    DWORD uMsg;
    WORD wParamL;
    WORD wParamH;
};

union _union_859 {
    MOUSEINPUT mi;
    KEYBDINPUT ki;
    HARDWAREINPUT hi;
};

struct tagINPUT {
    DWORD type;
    union _union_859 field1_0x4;
};

typedef struct tagTPMPARAMS tagTPMPARAMS, *PtagTPMPARAMS;

typedef struct tagTPMPARAMS TPMPARAMS;

struct tagTPMPARAMS {
    UINT cbSize;
    RECT rcExclude;
};

typedef struct tagMSG MSG;

typedef struct tagMONITORINFO tagMONITORINFO, *PtagMONITORINFO;

typedef struct tagMONITORINFO *LPMONITORINFO;

struct tagMONITORINFO {
    DWORD cbSize;
    RECT rcMonitor;
    RECT rcWork;
    DWORD dwFlags;
};

typedef struct tagMENUITEMINFOW tagMENUITEMINFOW, *PtagMENUITEMINFOW;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

typedef struct HBITMAP__ *HBITMAP;

struct tagMENUITEMINFOW {
    UINT cbSize;
    UINT fMask;
    UINT fType;
    UINT fState;
    UINT wID;
    HMENU hSubMenu;
    HBITMAP hbmpChecked;
    HBITMAP hbmpUnchecked;
    ULONG_PTR dwItemData;
    LPWSTR dwTypeData;
    UINT cch;
    HBITMAP hbmpItem;
};

struct HBITMAP__ {
    int unused;
};

typedef struct tagWNDCLASSEXW tagWNDCLASSEXW, *PtagWNDCLASSEXW;

typedef struct tagWNDCLASSEXW WNDCLASSEXW;

typedef LONG_PTR LRESULT;

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ *HBRUSH;

struct HBRUSH__ {
    int unused;
};

struct tagWNDCLASSEXW {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCWSTR lpszMenuName;
    LPCWSTR lpszClassName;
    HICON hIconSm;
};

typedef struct tagACCEL tagACCEL, *PtagACCEL;

struct tagACCEL {
    BYTE fVirt;
    WORD key;
    WORD cmd;
};

typedef struct tagMENUITEMINFOW MENUITEMINFOW;

typedef MENUITEMINFOW *LPCMENUITEMINFOW;

typedef struct tagACCEL *LPACCEL;

typedef struct tagPAINTSTRUCT tagPAINTSTRUCT, *PtagPAINTSTRUCT;

typedef struct tagPAINTSTRUCT *LPPAINTSTRUCT;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ *HDC;

struct HDC__ {
    int unused;
};

struct tagPAINTSTRUCT {
    HDC hdc;
    BOOL fErase;
    RECT rcPaint;
    BOOL fRestore;
    BOOL fIncUpdate;
    BYTE rgbReserved[32];
};

typedef struct tagINPUT *LPINPUT;

typedef struct tagPAINTSTRUCT PAINTSTRUCT;

typedef struct tagMENUITEMINFOW *LPMENUITEMINFOW;

typedef BOOL (*WNDENUMPROC)(HWND, LPARAM);

typedef void (*TIMERPROC)(HWND, UINT, UINT_PTR, DWORD);

typedef int INT_PTR;

typedef INT_PTR (*DLGPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct tagCURSORINFO *PCURSORINFO;

typedef TPMPARAMS *LPTPMPARAMS;

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Class Structure
};

typedef CLSID *LPCLSID;

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef IID *LPIID;

typedef struct tagLOGBRUSH tagLOGBRUSH, *PtagLOGBRUSH;

typedef struct tagLOGBRUSH LOGBRUSH;

typedef DWORD COLORREF;

struct tagLOGBRUSH {
    UINT lbStyle;
    COLORREF lbColor;
    ULONG_PTR lbHatch;
};

typedef struct _devicemodeW _devicemodeW, *P_devicemodeW;

typedef union _union_660 _union_660, *P_union_660;

typedef union _union_663 _union_663, *P_union_663;

typedef struct _struct_661 _struct_661, *P_struct_661;

typedef struct _struct_662 _struct_662, *P_struct_662;

typedef struct _POINTL _POINTL, *P_POINTL;

typedef struct _POINTL POINTL;

union _union_663 {
    DWORD dmDisplayFlags;
    DWORD dmNup;
};

struct _struct_661 {
    short dmOrientation;
    short dmPaperSize;
    short dmPaperLength;
    short dmPaperWidth;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
};

struct _POINTL {
    LONG x;
    LONG y;
};

struct _struct_662 {
    POINTL dmPosition;
    DWORD dmDisplayOrientation;
    DWORD dmDisplayFixedOutput;
};

union _union_660 {
    struct _struct_661 field0;
    struct _struct_662 field1;
};

struct _devicemodeW {
    WCHAR dmDeviceName[32];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    union _union_660 field6_0x4c;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    WCHAR dmFormName[32];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union _union_663 field17_0xb4;
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
};

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
};

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

typedef struct tagRGBQUAD RGBQUAD;

struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
};

struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
};

typedef struct _devicemodeW DEVMODEW;

typedef struct tagBITMAPINFO *LPBITMAPINFO;

typedef void *RPC_AUTH_IDENTITY_HANDLE;

typedef PVOID PSECURITY_DESCRIPTOR;

typedef struct _TOKEN_PRIVILEGES _TOKEN_PRIVILEGES, *P_TOKEN_PRIVILEGES;

typedef struct _LUID_AND_ATTRIBUTES _LUID_AND_ATTRIBUTES, *P_LUID_AND_ATTRIBUTES;

typedef struct _LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES;

typedef struct _LUID _LUID, *P_LUID;

typedef struct _LUID LUID;

struct _LUID {
    DWORD LowPart;
    LONG HighPart;
};

struct _LUID_AND_ATTRIBUTES {
    LUID Luid;
    DWORD Attributes;
};

struct _TOKEN_PRIVILEGES {
    DWORD PrivilegeCount;
    LUID_AND_ATTRIBUTES Privileges[1];
};

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

typedef union _union_226 _union_226, *P_union_226;

union _union_226 {
    DWORD PhysicalAddress;
    DWORD VirtualSize;
};

struct _IMAGE_SECTION_HEADER {
    BYTE Name[8];
    union _union_226 Misc;
    DWORD VirtualAddress;
    DWORD SizeOfRawData;
    DWORD PointerToRawData;
    DWORD PointerToRelocations;
    DWORD PointerToLinenumbers;
    WORD NumberOfRelocations;
    WORD NumberOfLinenumbers;
    DWORD Characteristics;
};

typedef WCHAR *PCNZWCH;

typedef struct _EXCEPTION_POINTERS EXCEPTION_POINTERS;

typedef DWORD *PSECURITY_INFORMATION;

typedef struct _SID_IDENTIFIER_AUTHORITY _SID_IDENTIFIER_AUTHORITY, *P_SID_IDENTIFIER_AUTHORITY;

typedef struct _SID_IDENTIFIER_AUTHORITY *PSID_IDENTIFIER_AUTHORITY;

struct _SID_IDENTIFIER_AUTHORITY {
    BYTE Value[6];
};

typedef enum _ACL_INFORMATION_CLASS {
    AclRevisionInformation=1,
    AclSizeInformation=2
} _ACL_INFORMATION_CLASS;

typedef enum _ACL_INFORMATION_CLASS ACL_INFORMATION_CLASS;

typedef struct _LUID *PLUID;

typedef struct _ACL _ACL, *P_ACL;

typedef struct _ACL ACL;

typedef ACL *PACL;

struct _ACL {
    BYTE AclRevision;
    BYTE Sbz1;
    WORD AclSize;
    WORD AceCount;
    WORD Sbz2;
};

typedef struct _OSVERSIONINFOW _OSVERSIONINFOW, *P_OSVERSIONINFOW;

typedef struct _OSVERSIONINFOW *LPOSVERSIONINFOW;

struct _OSVERSIONINFOW {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    WCHAR szCSDVersion[128];
};

typedef CHAR *LPCSTR;

typedef enum _SECURITY_IMPERSONATION_LEVEL {
    SecurityAnonymous=0,
    SecurityIdentification=1,
    SecurityImpersonation=2,
    SecurityDelegation=3
} _SECURITY_IMPERSONATION_LEVEL;

typedef enum _SECURITY_IMPERSONATION_LEVEL SECURITY_IMPERSONATION_LEVEL;

typedef LONG *PLONG;

typedef ULARGE_INTEGER *PULARGE_INTEGER;

typedef struct _IO_COUNTERS _IO_COUNTERS, *P_IO_COUNTERS;

typedef struct _IO_COUNTERS IO_COUNTERS;

struct _IO_COUNTERS {
    ULONGLONG ReadOperationCount;
    ULONGLONG WriteOperationCount;
    ULONGLONG OtherOperationCount;
    ULONGLONG ReadTransferCount;
    ULONGLONG WriteTransferCount;
    ULONGLONG OtherTransferCount;
};

typedef enum _TOKEN_TYPE {
    TokenPrimary=1,
    TokenImpersonation=2
} _TOKEN_TYPE;

typedef enum _TOKEN_TYPE TOKEN_TYPE;

typedef CHAR *LPSTR;

typedef struct _TOKEN_PRIVILEGES *PTOKEN_PRIVILEGES;

typedef DWORD ACCESS_MASK;

typedef PVOID PSID;

typedef enum _TOKEN_INFORMATION_CLASS {
    TokenUser=1,
    TokenGroups=2,
    TokenPrivileges=3,
    TokenOwner=4,
    TokenPrimaryGroup=5,
    TokenDefaultDacl=6,
    TokenSource=7,
    TokenType=8,
    TokenImpersonationLevel=9,
    TokenStatistics=10,
    TokenRestrictedSids=11,
    TokenSessionId=12,
    TokenGroupsAndPrivileges=13,
    TokenSessionReference=14,
    TokenSandBoxInert=15,
    TokenAuditPolicy=16,
    TokenOrigin=17,
    TokenElevationType=18,
    TokenLinkedToken=19,
    TokenElevation=20,
    TokenHasRestrictions=21,
    TokenAccessInformation=22,
    TokenVirtualizationAllowed=23,
    TokenVirtualizationEnabled=24,
    TokenIntegrityLevel=25,
    TokenUIAccess=26,
    TokenMandatoryPolicy=27,
    TokenLogonSid=28,
    MaxTokenInfoClass=29
} _TOKEN_INFORMATION_CLASS;

typedef enum _TOKEN_INFORMATION_CLASS TOKEN_INFORMATION_CLASS;

typedef struct _IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;

typedef WCHAR *LPWCH;

typedef LARGE_INTEGER *PLARGE_INTEGER;

typedef IO_COUNTERS *PIO_COUNTERS;

typedef HANDLE *PHANDLE;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

typedef ULONG_PTR SIZE_T;

typedef ULONG_PTR *PDWORD_PTR;

typedef struct in_addr in_addr, *Pin_addr;

typedef union _union_1226 _union_1226, *P_union_1226;

typedef struct _struct_1227 _struct_1227, *P_struct_1227;

typedef struct _struct_1228 _struct_1228, *P_struct_1228;

struct _struct_1228 {
    USHORT s_w1;
    USHORT s_w2;
};

struct _struct_1227 {
    UCHAR s_b1;
    UCHAR s_b2;
    UCHAR s_b3;
    UCHAR s_b4;
};

union _union_1226 {
    struct _struct_1227 S_un_b;
    struct _struct_1228 S_un_w;
    ULONG S_addr;
};

struct in_addr {
    union _union_1226 S_un;
};

typedef struct _IMAGELIST _IMAGELIST, *P_IMAGELIST;

typedef struct _IMAGELIST *HIMAGELIST;

struct _IMAGELIST {
};

typedef struct tagINITCOMMONCONTROLSEX tagINITCOMMONCONTROLSEX, *PtagINITCOMMONCONTROLSEX;

typedef struct tagINITCOMMONCONTROLSEX INITCOMMONCONTROLSEX;

struct tagINITCOMMONCONTROLSEX {
    DWORD dwSize;
    DWORD dwICC;
};

typedef struct _PROCESS_MEMORY_COUNTERS _PROCESS_MEMORY_COUNTERS, *P_PROCESS_MEMORY_COUNTERS;

struct _PROCESS_MEMORY_COUNTERS {
    DWORD cb;
    DWORD PageFaultCount;
    SIZE_T PeakWorkingSetSize;
    SIZE_T WorkingSetSize;
    SIZE_T QuotaPeakPagedPoolUsage;
    SIZE_T QuotaPagedPoolUsage;
    SIZE_T QuotaPeakNonPagedPoolUsage;
    SIZE_T QuotaNonPagedPoolUsage;
    SIZE_T PagefileUsage;
    SIZE_T PeakPagefileUsage;
};

typedef struct _PROCESS_MEMORY_COUNTERS PROCESS_MEMORY_COUNTERS;

typedef PROCESS_MEMORY_COUNTERS *PPROCESS_MEMORY_COUNTERS;

typedef struct tagPOINT *LPPOINT;

typedef struct HFONT__ HFONT__, *PHFONT__;

struct HFONT__ {
    int unused;
};

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef struct HACCEL__ HACCEL__, *PHACCEL__;

typedef struct HACCEL__ *HACCEL;

struct HACCEL__ {
    int unused;
};

typedef struct HMONITOR__ HMONITOR__, *PHMONITOR__;

typedef struct HMONITOR__ *HMONITOR;

struct HMONITOR__ {
    int unused;
};

typedef struct tagSIZE tagSIZE, *PtagSIZE;

struct tagSIZE {
    LONG cx;
    LONG cy;
};

typedef uint *PUINT;

typedef struct HPEN__ HPEN__, *PHPEN__;

struct HPEN__ {
    int unused;
};

typedef struct HDESK__ HDESK__, *PHDESK__;

struct HDESK__ {
    int unused;
};

typedef int (*FARPROC)(void);

typedef WORD ATOM;

typedef struct HRGN__ HRGN__, *PHRGN__;

typedef struct HRGN__ *HRGN;

struct HRGN__ {
    int unused;
};

typedef struct HWINSTA__ HWINSTA__, *PHWINSTA__;

typedef struct HWINSTA__ *HWINSTA;

struct HWINSTA__ {
    int unused;
};

typedef BOOL *LPBOOL;

typedef void *HGDIOBJ;

typedef struct HKEY__ *HKEY;

typedef struct HRSRC__ HRSRC__, *PHRSRC__;

typedef struct HRSRC__ *HRSRC;

struct HRSRC__ {
    int unused;
};

typedef struct HFONT__ *HFONT;

typedef DWORD *LPDWORD;

typedef struct HPEN__ *HPEN;

typedef DWORD *PDWORD;

typedef struct _FILETIME *PFILETIME;

typedef struct tagSIZE *LPSIZE;

typedef BOOL *PBOOL;

typedef struct _FILETIME *LPFILETIME;

typedef HANDLE *LPHANDLE;

typedef WORD *LPWORD;

typedef HKEY *PHKEY;

typedef BYTE *PBYTE;

typedef void *LPCVOID;

typedef struct HDESK__ *HDESK;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset;
    dword NameIsString;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_12 IMAGE_RESOURCE_DIR_STRING_U_12, *PIMAGE_RESOURCE_DIR_STRING_U_12;

struct IMAGE_RESOURCE_DIR_STRING_U_12 {
    word Length;
    wchar16 NameString[6];
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;

struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY32 IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;

struct IMAGE_LOAD_CONFIG_DIRECTORY32 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    dword DeCommitFreeBlockThreshold;
    dword DeCommitTotalFreeThreshold;
    pointer32 LockPrefixTable;
    dword MaximumAllocationSize;
    dword VirtualMemoryThreshold;
    dword ProcessHeapFlags;
    dword ProcessAffinityMask;
    word CsdVersion;
    word DependentLoadFlags;
    pointer32 EditList;
    pointer32 SecurityCookie;
    pointer32 SEHandlerTable;
    dword SEHandlerCount;
};

typedef LONG LSTATUS;

typedef ACCESS_MASK REGSAM;

typedef struct HWAVEOUT__ HWAVEOUT__, *PHWAVEOUT__;

struct HWAVEOUT__ {
    int unused;
};

typedef DWORD MCIERROR;

typedef UINT MMRESULT;

typedef struct HWAVEOUT__ *HWAVEOUT;

typedef struct WSAData WSAData, *PWSAData;

typedef struct WSAData WSADATA;

struct WSAData {
    WORD wVersion;
    WORD wHighVersion;
    char szDescription[257];
    char szSystemStatus[129];
    ushort iMaxSockets;
    ushort iMaxUdpDg;
    char *lpVendorInfo;
};

typedef UINT_PTR SOCKET;

typedef ushort u_short;

typedef WSADATA *LPWSADATA;

typedef struct sockaddr sockaddr, *Psockaddr;

struct sockaddr {
    u_short sa_family;
    char sa_data[14];
};

typedef struct fd_set fd_set, *Pfd_set;

typedef uint u_int;

struct fd_set {
    u_int fd_count;
    SOCKET fd_array[64];
};

typedef struct timeval timeval, *Ptimeval;

struct timeval {
    long tv_sec;
    long tv_usec;
};

typedef struct hostent hostent, *Phostent;

struct hostent {
    char *h_name;
    char **h_aliases;
    short h_addrtype;
    short h_length;
    char **h_addr_list;
};

typedef struct _tiddata _tiddata, *P_tiddata;

typedef struct _tiddata *_ptiddata;

typedef struct setloc_struct setloc_struct, *Psetloc_struct;

typedef struct setloc_struct _setloc_struct;

typedef struct _is_ctype_compatible _is_ctype_compatible, *P_is_ctype_compatible;

struct _is_ctype_compatible {
    ulong id;
    int is_clike;
};

struct setloc_struct {
    wchar_t *pchLanguage;
    wchar_t *pchCountry;
    int iLocState;
    int iPrimaryLen;
    BOOL bAbbrevLanguage;
    BOOL bAbbrevCountry;
    UINT _cachecp;
    wchar_t _cachein[131];
    wchar_t _cacheout[131];
    struct _is_ctype_compatible _Loc_c[5];
    wchar_t _cacheLocaleName[85];
};

struct _tiddata {
    ulong _tid;
    uintptr_t _thandle;
    int _terrno;
    ulong _tdoserrno;
    uint _fpds;
    ulong _holdrand;
    char *_token;
    wchar_t *_wtoken;
    uchar *_mtoken;
    char *_errmsg;
    wchar_t *_werrmsg;
    char *_namebuf0;
    wchar_t *_wnamebuf0;
    char *_namebuf1;
    wchar_t *_wnamebuf1;
    char *_asctimebuf;
    wchar_t *_wasctimebuf;
    void *_gmtimebuf;
    char *_cvtbuf;
    uchar _con_ch_buf[5];
    ushort _ch_buf_used;
    void *_initaddr;
    void *_initarg;
    void *_pxcptacttab;
    void *_tpxcptinfoptrs;
    int _tfpecode;
    pthreadmbcinfo ptmbcinfo;
    pthreadlocinfo ptlocinfo;
    int _ownlocale;
    ulong _NLG_dwCode;
    void *_terminate;
    void *_unexpected;
    void *_translator;
    void *_purecall;
    void *_curexception;
    void *_curcontext;
    int _ProcessingThrow;
    void *_curexcspec;
    void *_pFrameInfoChain;
    _setloc_struct _setloc_data;
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
    void *_reserved5;
    int _cxxReThrow;
    ulong __initDomain;
    int _initapartment;
};

typedef struct CRect CRect, *PCRect;

struct CRect { // PlaceHolder Structure
};

typedef struct _LocaleUpdate _LocaleUpdate, *P_LocaleUpdate;

struct _LocaleUpdate { // PlaceHolder Structure
};

typedef enum tagREGKIND {
    REGKIND_DEFAULT=0,
    REGKIND_REGISTER=1,
    REGKIND_NONE=2
} tagREGKIND;

typedef enum tagREGKIND REGKIND;

typedef struct tagINTERFACEDATA tagINTERFACEDATA, *PtagINTERFACEDATA;

typedef struct tagINTERFACEDATA INTERFACEDATA;

typedef struct tagMETHODDATA tagMETHODDATA, *PtagMETHODDATA;

typedef struct tagMETHODDATA METHODDATA;

typedef struct tagPARAMDATA tagPARAMDATA, *PtagPARAMDATA;

typedef struct tagPARAMDATA PARAMDATA;

struct tagINTERFACEDATA {
    METHODDATA *pmethdata;
    UINT cMembers;
};

struct tagMETHODDATA {
    OLECHAR *szName;
    PARAMDATA *ppdata;
    DISPID dispid;
    UINT iMeth;
    CALLCONV cc;
    UINT cArgs;
    WORD wFlags;
    VARTYPE vtReturn;
};

struct tagPARAMDATA {
    OLECHAR *szName;
    VARTYPE vt;
};

typedef struct _LDBL12 _LDBL12, *P_LDBL12;

struct _LDBL12 {
    uchar ld12[12];
};

typedef struct _CRT_FLOAT _CRT_FLOAT, *P_CRT_FLOAT;

struct _CRT_FLOAT {
    float f;
};

typedef struct _CRT_DOUBLE _CRT_DOUBLE, *P_CRT_DOUBLE;

struct _CRT_DOUBLE {
    double x;
};

typedef int (*_onexit_t)(void);

typedef struct _NOTIFYICONDATAW _NOTIFYICONDATAW, *P_NOTIFYICONDATAW;

struct _NOTIFYICONDATAW {
    DWORD cbSize;
    HWND hWnd;
    UINT uID;
    UINT uFlags;
    UINT uCallbackMessage;
    HICON hIcon;
    WCHAR szTip[64];
};

typedef struct HDROP__ HDROP__, *PHDROP__;

typedef struct HDROP__ *HDROP;

struct HDROP__ {
    int unused;
};

typedef struct _SHELLEXECUTEINFOW _SHELLEXECUTEINFOW, *P_SHELLEXECUTEINFOW;

typedef struct _SHELLEXECUTEINFOW SHELLEXECUTEINFOW;

typedef union _union_1208 _union_1208, *P_union_1208;

union _union_1208 {
    HANDLE hIcon;
};

struct _SHELLEXECUTEINFOW {
    DWORD cbSize;
    ULONG fMask;
    HWND hwnd;
    LPCWSTR lpVerb;
    LPCWSTR lpFile;
    LPCWSTR lpParameters;
    LPCWSTR lpDirectory;
    int nShow;
    HINSTANCE hInstApp;
    void *lpIDList;
    LPCWSTR lpClass;
    HKEY hkeyClass;
    DWORD dwHotKey;
    union _union_1208 u;
    HANDLE hProcess;
};

typedef struct _SHFILEOPSTRUCTW _SHFILEOPSTRUCTW, *P_SHFILEOPSTRUCTW;

typedef WORD FILEOP_FLAGS;

struct _SHFILEOPSTRUCTW {
    HWND hwnd;
    UINT wFunc;
    LPCWSTR pFrom;
    LPCWSTR pTo;
    FILEOP_FLAGS fFlags;
    BOOL fAnyOperationsAborted;
    LPVOID hNameMappings;
    LPCWSTR lpszProgressTitle;
};

typedef struct _NOTIFYICONDATAW *PNOTIFYICONDATAW;

typedef struct _SHFILEOPSTRUCTW *LPSHFILEOPSTRUCTW;

typedef struct IUnknown *LPUNKNOWN;




uint __thiscall FUN_00401000(void *this,LPARAM *param_1,char param_2);
undefined4 FUN_0040103b(HWND param_1);
undefined4 __thiscall FUN_00401062(void *this,int param_1,int *param_2);
undefined4 FUN_00401160(int param_1,int *param_2);
undefined4 * __thiscall FUN_004012e3(void *this,undefined4 *param_1);
void __thiscall FUN_004012f7(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_0040132f(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_00401360(void *this,undefined4 *param_1);
undefined4 __thiscall FUN_0040139c(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00401605(void *this,int param_1,uint *param_2);
undefined4 __thiscall FUN_00401bec(void *this,int param_1);
undefined1 __fastcall FUN_00401c08(int param_1,int *param_2,int *param_3);
void __thiscall FUN_00401caa(void *this,undefined4 *param_1);
undefined4 FUN_00401cde(int param_1,void *param_2);
undefined1 FUN_00401f21(void *param_1,uint *param_2,undefined1 *param_3,undefined1 *param_4,undefined1 *param_5,undefined1 *param_6);
uint FUN_00402036(short param_1,void *param_2,undefined4 *param_3,uint *param_4);
int __thiscall FUN_00402086(void *this,uint param_1);
void __fastcall FUN_004020a3(int param_1);
undefined4 __thiscall FUN_004020ce(void *this,undefined4 param_1,void *param_2);
void __thiscall FUN_0040213b(void *this,undefined4 *param_1);
int * __fastcall FUN_004021ae(int *param_1);
int __fastcall FUN_0040227e(int param_1);
undefined4 * __fastcall FUN_004022a4(undefined4 *param_1);
int __fastcall FUN_00402310(int param_1);
undefined4 * FUN_00402322(void);
undefined4 * __fastcall FUN_0040262a(undefined4 *param_1);
undefined4 * __fastcall FUN_0040263f(undefined4 *param_1);
undefined4 * __fastcall FUN_004026a7(undefined4 *param_1);
undefined4 * FUN_004026df(void);
undefined4 * __fastcall FUN_0040272e(undefined4 *param_1);
void __thiscall FUN_00402745(void *this,int *param_1);
void * __thiscall FUN_00402783(void *this,int *param_1);
undefined4 * __fastcall FUN_004027c7(undefined4 *param_1);
void __fastcall FUN_004027ec(undefined4 *param_1);
int __fastcall FUN_00402854(int param_1);
int __fastcall FUN_00402870(int param_1);
int __fastcall FUN_0040288f(int param_1);
void __thiscall FUN_004028a6(void *this,undefined4 *param_1);
undefined4 __thiscall FUN_00402916(void *this,int param_1);
int __thiscall FUN_00402925(void *this,wchar_t *param_1);
undefined4 __thiscall FUN_00402956(void *this,int *param_1,char param_2);
undefined4 FUN_004029c8(int param_1,int *param_2,HWND param_3);
undefined8 __fastcall FUN_00402a13(void *param_1);
void * __fastcall FUN_00402a23(void *param_1);
void __fastcall FUN_00402a38(int param_1);
void __thiscall FUN_00402a54(void *this,int param_1);
undefined4 * __fastcall FUN_00402a99(undefined4 *param_1);
char __thiscall FUN_00402aae(void *this,int param_1,char param_2,int *param_3);
void FUN_00402b4d(int param_1);
void __thiscall FUN_00402b7a(void *this,undefined4 *param_1);
void FUN_00402bce(int *param_1,int *param_2);
undefined4 * __thiscall FUN_00402bef(void *this,int param_1);
undefined4 * __fastcall FUN_00402c0b(undefined4 *param_1);
undefined4 __thiscall FUN_00402c27(void *this,int param_1,int *param_2);
int __thiscall FUN_00402c79(void *this,HWND param_1);
void __thiscall FUN_00402d03(void *this,int *param_1);
undefined4 __thiscall FUN_00402db5(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_00402ec0(void *this,int *param_1,int *param_2,void *param_3,undefined4 param_4,char param_5,undefined1 param_6,undefined1 param_7);
undefined4 __thiscall FUN_00402fc6(void *this,undefined4 param_1);
void __fastcall FUN_00402ff6(int *param_1);
void __fastcall FUN_00403025(int param_1);
void __fastcall FUN_00403076(int param_1);
void __fastcall FUN_00403093(int param_1);
void __fastcall FUN_004032d3(undefined4 *param_1);
void __thiscall FUN_004032e8(void *this,int *param_1);
void __thiscall FUN_00403321(void *this,int param_1,undefined1 param_2);
int __fastcall FUN_00403359(int param_1);
void __fastcall FUN_00403367(int *param_1);
int * __fastcall FUN_0040339d(int *param_1);
void __fastcall FUN_004033bc(undefined4 *param_1);
void __fastcall FUN_0040340b(int param_1);
void __fastcall FUN_00403438(undefined4 *param_1);
void __fastcall FUN_0040347e(int param_1);
void __fastcall FUN_00403494(int param_1);
void __fastcall FUN_004034a2(int param_1);
void __fastcall FUN_004034b0(int param_1);
void __fastcall FUN_004034be(int *param_1);
void __fastcall FUN_004034eb(int param_1);
void __fastcall FUN_0040351d(int param_1);
void __fastcall FUN_00403542(int param_1);
void __fastcall FUN_0040355d(int param_1);
void __fastcall FUN_00403579(undefined4 *param_1);
void __fastcall FUN_0040358e(undefined4 *param_1);
void __fastcall FUN_004035b0(undefined4 *param_1);
void * __fastcall FUN_004035c5(void *param_1);
void __fastcall FUN_004035d5(int param_1);
void __fastcall FUN_004035f0(int param_1);
undefined8 __fastcall FUN_004035fe(void *param_1);
void __fastcall FUN_0040363c(undefined4 *param_1,void *param_2);
void __thiscall FUN_0040366c(void *this,wchar_t *param_1);
void __fastcall FUN_00403699(wchar_t *param_1);
void FUN_004036b8(void);
void __fastcall FUN_00403729(undefined4 *param_1);
void __thiscall FUN_00403742(void *this,HWND param_1,uint param_2,uint param_3,uint param_4);
LRESULT __thiscall FUN_0040374b(void *this,HWND param_1,uint param_2,uint param_3,uint param_4);
void __fastcall FUN_00403847(int param_1);
void FUN_004038ab(void);
void __fastcall FUN_004038ec(int param_1);
void __fastcall FUN_004038fa(undefined4 *param_1);
void FUN_0040390f(void);
void __fastcall FUN_00403973(undefined4 *param_1);
undefined4 * __fastcall FUN_0040399e(undefined4 *param_1);
void FUN_004039b6(void);
void __fastcall FUN_004039c6(undefined4 *param_1);
undefined4 FUN_004039db(undefined4 *param_1,undefined4 *param_2);
undefined4 FUN_00403a0f(undefined4 param_1,undefined4 param_2,wchar_t *param_3);
void __fastcall FUN_00403adb(int param_1);
void __fastcall FUN_00403b12(int *param_1);
int __fastcall FUN_00403ba9(undefined4 *param_1,undefined4 *param_2);
undefined4 * FUN_00403bd9(void);
void FUN_00403d19(wchar_t *param_1);
void FUN_00403e6e(void);
void FUN_00403f53(undefined4 param_1,HICON param_2,HICON param_3);
void __cdecl FUN_00404024(undefined4 param_1,undefined4 param_2,int param_3);
void __fastcall FUN_00404052(undefined4 *param_1);
void __fastcall FUN_0040406b(int param_1);
bool __fastcall FUN_004040a7(undefined4 *param_1,void *param_2);
undefined4 __thiscall FUN_004040e5(void *this,undefined4 *param_1,int *param_2,undefined4 param_3,undefined1 *param_4);
undefined4 __thiscall FUN_00404139(void *this,undefined4 *param_1,uint *param_2,int *param_3);
int __thiscall FUN_004041a9(void *this,wchar_t *param_1,int param_2);
undefined4 * __fastcall FUN_00404214(undefined4 *param_1);
void __fastcall FUN_00404252(int *param_1);
void __fastcall FUN_00404291(undefined4 *param_1);
undefined1 * __fastcall FUN_004042cc(undefined4 *param_1);
bool __fastcall FUN_004042e4(undefined4 *param_1);
void __fastcall FUN_004042f6(undefined4 *param_1);
undefined1 * __fastcall FUN_00404321(undefined4 *param_1);
bool __fastcall FUN_00404339(undefined4 *param_1);
void __fastcall FUN_0040434b(undefined4 *param_1);
undefined4 __thiscall FUN_00404380(void *this,char param_1);
size_t __thiscall FUN_004044ed(void *this,void *param_1,size_t param_2,size_t param_3,FILE *param_4);
int __thiscall FUN_00404517(void *this,FILE *param_1,int param_2,int param_3);
int * __fastcall FUN_0040453b(int *param_1);
bool __thiscall FUN_00404550(void *this,undefined4 *param_1,uint param_2);
void __fastcall FUN_004045a6(undefined4 *param_1);
void __fastcall FUN_004045be(void *param_1);
void __fastcall FUN_004045d5(void *param_1);
bool __thiscall FUN_004046ce(void *this,uint param_1,uint param_2,PLARGE_INTEGER param_3);
undefined8 __fastcall FUN_00404798(undefined4 *param_1);
undefined4 * __thiscall FUN_004047b7(void *this,undefined4 param_1);
void __fastcall FUN_004047e2(undefined4 *param_1);
bool __thiscall FUN_004047ff(void *this,undefined4 *param_1,uint param_2);
void __fastcall FUN_00404845(void *param_1);
uint FUN_00404860(int param_1,uint param_2);
int * __fastcall FUN_004048ba(int *param_1);
void __fastcall FUN_004048dd(int *param_1);
void __fastcall FUN_00404907(int *param_1);
int * __fastcall FUN_00404931(int *param_1);
int __thiscall FUN_00404950(void *this,FILE *param_1);
void FUN_0040496c(int param_1,undefined *param_2);
uint __thiscall FUN_004049a0(void *this,undefined4 *param_1);
bool __cdecl FUN_004049fb(undefined4 param_1,undefined4 *param_2);
undefined1 * FUN_00404a30(undefined4 param_1);
void FUN_00404b71(void);
void FUN_00404b81(void);
void FUN_00404bea(void);
void FUN_00404c30(int *param_1,char *param_2);
void __fastcall FUN_00404c50(undefined4 *param_1);
undefined4 FUN_00404c75(void);
undefined4 FUN_00404db1(int param_1);
int __thiscall FUN_00404dd9(void *this,int param_1);
void FUN_00404eec(int param_1,undefined *param_2);
void __fastcall FUN_00404f11(undefined4 *param_1);
void __fastcall FUN_00404f30(int param_1);
int * __thiscall FUN_00404fc4(void *this,byte param_1);
void __fastcall FUN_00404ffc(void *param_1);
void __fastcall FUN_004050e6(wchar_t *param_1,wchar_t *param_2,int param_3);
int * __thiscall FUN_0040510d(void *this,int *param_1);
int * __thiscall FUN_00405130(void *this,wchar_t *param_1);
void __thiscall FUN_0040518c(void *this,wchar_t *param_1);
void __fastcall FUN_004051af(int param_1);
void __fastcall FUN_004052b5(undefined2 *param_1);
void FUN_00405337(void);
void __fastcall FUN_00405374(void *param_1);
void * __thiscall FUN_004053bc(void *this,int *param_1);
void __fastcall FUN_004053f2(undefined4 *param_1);
void __fastcall FUN_00405410(int param_1);
void __thiscall FUN_00405476(void *this,int *param_1);
void __thiscall FUN_004054d6(void *this,HWND param_1,int *param_2);
undefined4 __fastcall FUN_004055bd(double *param_1);
undefined4 __fastcall FUN_004055d8(double *param_1);
void __thiscall FUN_004055f3(void *this,int *param_1);
void __thiscall FUN_00405650(void *this,HWND param_1,int *param_2);
undefined4 __thiscall FUN_004056b0(void *this,HWND param_1,HWND param_2,undefined4 param_3);
undefined1 __fastcall FUN_00405700(double *param_1);
int __fastcall FUN_00405744(int param_1);
undefined4 FUN_00405752(int *param_1);
undefined4 FUN_00405798(void);
void FUN_0040588c(undefined4 param_1,int *param_2);
uint FUN_00405928(void);
undefined4 __fastcall FUN_00405b03(void *param_1);
int FUN_00405e48(int param_1);
int __fastcall FUN_00405e6b(int param_1);
void __thiscall FUN_00405e85(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_00405ec3(void *this,undefined4 *param_1);
int __fastcall FUN_00405f0b(int param_1);
void __thiscall FUN_00405f19(void *this,undefined4 *param_1);
void __fastcall FUN_00405f52(int *param_1);
undefined4 FUN_00405f85(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
undefined4 FUN_00406000(void);
void __thiscall FUN_00406009(void *this,wchar_t *param_1);
int __thiscall FUN_004061a6(void *this,uint param_1);
void FUN_004061ca(wchar_t *param_1,undefined1 *param_2);
bool __thiscall FUN_004063fc(void *this,void *param_1);
undefined4 FUN_00406430(undefined4 *param_1,undefined4 param_2);
void __thiscall FUN_004064cf(void *this,undefined4 *param_1);
void __thiscall FUN_00406571(void *this,short *param_1);
uint __thiscall FUN_00406598(void *this,short *param_1);
void __fastcall FUN_0040660f(undefined4 *param_1,void *param_2);
undefined4 FUN_00406652(int param_1,void *param_2);
undefined4 FUN_004066d1(int param_1,int *param_2,int *param_3,int *param_4,undefined1 param_5);
uint __fastcall FUN_00406926(undefined4 *param_1,undefined4 *param_2);
undefined4 FUN_00406943(int param_1,void *param_2);
void __thiscall FUN_004069e9(void *this,int *param_1,uint param_2,int param_3);
void __thiscall FUN_00406a63(void *this,wchar_t *param_1);
bool __fastcall FUN_00406aea(int param_1);
uint FUN_00406af6(int param_1);
undefined4 * __thiscall FUN_00406b0f(void *this,int param_1);
void __fastcall FUN_00406b4a(int param_1);
int * __thiscall FUN_00406b68(void *this,int *param_1);
uint __fastcall FUN_00406bc4(short *param_1,int *param_2,int param_3);
uint __fastcall FUN_00406c61(ushort *param_1);
undefined4 __fastcall FUN_00406c8a(ushort *param_1,uint param_2,int param_3,int param_4);
undefined4 __fastcall FUN_00406d75(ushort *param_1,uint param_2,int param_3,int param_4);
void __thiscall FUN_00406e5e(void *this,int *param_1);
int * __thiscall FUN_00406e7b(void *this,int *param_1);
int * __thiscall FUN_00406eed(void *this,int *param_1);
undefined4 * __fastcall FUN_00406f07(ushort *param_1,uint param_2,undefined4 param_3,undefined4 *param_4,int *param_5);
void FUN_0040743e(void);
undefined4 FUN_0040746d(void);
undefined4 __fastcall FUN_00407474(uint param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5,int param_6,int param_7,int param_8,uint *param_9,uint *param_10,uint *param_11,uint *param_12,undefined4 param_13,int param_14,int *param_15);
undefined4 __fastcall FUN_004077b0(uint *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,uint *param_5,uint *param_6,uint *param_7,uint *param_8,undefined4 *param_9,int param_10,int param_11,int *param_12);
undefined4 FUN_004087ec(void);
int __fastcall FUN_0040887d(int param_1,undefined4 *param_2,uint param_3,int param_4,uint param_5,uint param_6);
int __fastcall FUN_004088f3(ushort *param_1,byte *param_2,int param_3);
undefined4 __fastcall FUN_00408922(ushort *param_1,ushort *param_2,int param_3,int param_4,int *param_5);
ushort * __fastcall FUN_00408b14(ushort *param_1,int param_2);
int __thiscall FUN_00408b42(void *this,undefined4 param_1,uint *param_2);
int __fastcall FUN_00408b7e(short *param_1);
void __fastcall FUN_00408b8e(ushort *param_1,int param_2,int param_3);
void __fastcall FUN_00408e1a(undefined4 *param_1);
void __fastcall FUN_00408e32(int param_1);
int __fastcall FUN_00408e6e(int *param_1,uint *param_2,undefined4 *param_3,int param_4,uint param_5,int param_6);
undefined4 __thiscall FUN_00408f18(void *this,int param_1,void *param_2);
int __fastcall FUN_00408ffe(ushort *param_1,int param_2,int param_3,undefined4 *param_4,int param_5);
int __thiscall FUN_00409048(void *this,undefined4 *param_1);
undefined4 __thiscall FUN_0040908c(void *this,int param_1,int *param_2);
short * __fastcall FUN_0040934f(short *param_1,short param_2,int param_3);
void __fastcall FUN_0040936c(longlong *param_1);
int __thiscall FUN_004093f0(void *this,int *param_1,int param_2,undefined8 **param_3);
undefined4 FUN_004096c0(int param_1,int *param_2);
undefined4 ****** __thiscall FUN_00409b60(void *this,undefined4 ******param_1,int param_2,int param_3,uint param_4,uint *param_5,int param_6);
undefined4 switchD_0040a384::caseD_0(void);
void FUN_0040a4c7(void);
int FUN_0040ac56(void);
void __cdecl FUN_0040af34(size_t param_1);
void __cdecl FID_conflict:_free(void *_Memory);
int FUN_0040af50(int *param_1,undefined8 **param_2);
void __thiscall FUN_0040b18b(void *this,uint param_1,int param_2);
undefined4 __thiscall FUN_0040b1eb(void *this,int param_1,void *param_2);
bool __thiscall FUN_0040b337(void *this,wchar_t *param_1);
int * __thiscall FUN_0040b384(void *this,int *param_1,uint param_2,int param_3);
undefined4 FUN_0040b470(int param_1,short *param_2,void *param_3);
void __thiscall FUN_0040ba85(void *this,int *param_1);
void __thiscall FUN_0040bb85(void *this,int param_1);
void __thiscall FUN_0040bbfc(void *this,short param_1);
undefined4 * __thiscall FUN_0040bc74(void *this,undefined4 *param_1);
void __fastcall FUN_0040bcce(undefined4 *param_1);
undefined4 * __thiscall FUN_0040bd30(void *this,LPWSTR param_1,DWORD param_2,undefined4 param_3,int *param_4);
void __fastcall FUN_0040bdfa(undefined4 *param_1);
int __thiscall FUN_0040be64(void *this,undefined4 *param_1);
int __fastcall FUN_0040be9d(ushort *param_1,ushort *param_2,int param_3);
undefined4 FUN_0040becc(int param_1);
undefined4 __fastcall FUN_0040befe(int param_1);
undefined1 __thiscall FUN_0040bf20(void *this,undefined4 *param_1,uint *param_2);
int * __thiscall FUN_0040bf71(void *this,undefined1 param_1);
uint __thiscall FUN_0040bfaf(void *this,undefined4 *param_1);
char __thiscall FUN_0040c060(void *this,int *param_1);
void __fastcall FUN_0040c1c2(undefined4 *param_1);
void FUN_0040c1de(undefined4 *param_1,undefined4 *param_2);
void __thiscall FUN_0040c24f(void *this,int param_1,int param_2,int param_3);
uint __thiscall FUN_0040c2e0(void *this,int param_1,uint param_2);
void __thiscall FUN_0040c369(void *this,int param_1);
void __thiscall FUN_0040c3b9(void *this,int param_1);
uint FUN_0040c413(int param_1,int *param_2,double *param_3,undefined4 *param_4,short param_5);
undefined4 FUN_0040c62c(int param_1,int param_2,uint *param_3,undefined4 *param_4);
void FUN_0040c6a5(int param_1,int *param_2,int *param_3,undefined4 *param_4);
int * __thiscall FUN_0040c799(void *this,undefined2 param_1);
char __thiscall FUN_0040c833(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3,wchar_t *param_4,undefined4 param_5);
void __fastcall FUN_0040cb37(undefined4 *param_1);
void FUN_0040cb5a(wchar_t *param_1);
uint FUN_0040cb93(wchar_t *param_1);
undefined4 __thiscall FUN_0040cc24(void *this,wchar_t *param_1,undefined4 *param_2,int *param_3,void *param_4);
undefined4 FUN_0040cda9(void);
int * __thiscall FUN_0040cdb9(void *this,wchar_t *param_1);
undefined4 * __thiscall FUN_0040ce19(void *this,wchar_t *param_1);
undefined4 __fastcall FUN_0040ce87(int param_1,int param_2,uint param_3,uint param_4);
undefined4 __fastcall FUN_0040cee3(undefined4 param_1,uint param_2,int param_3,double *param_4);
void __fastcall FUN_0040cf1f(double *param_1);
double __fastcall FUN_0040cf93(double *param_1);
uint __fastcall FUN_0040cfe9(int param_1);
uint __fastcall FUN_0040d007(int param_1);
ulonglong __cdecl FUN_0040d02e(undefined4 param_1,undefined4 param_2,double param_3);
uint __fastcall FUN_0040d0c9(double *param_1,double *param_2);
undefined4 FUN_0040d17b(void);
undefined4 __fastcall FUN_0040d1c1(undefined4 param_1,uint param_2,int param_3,int *param_4);
ulonglong __fastcall FUN_0040d286(int *param_1,uint param_2);
undefined4 FUN_0040d2e0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8);
void FUN_0040d388(int param_1,int param_2,uint param_3,uint param_4,int param_5);
uint __thiscall FUN_0040d3fe(void *this,int param_1,undefined4 *param_2,int *param_3);
void __fastcall FUN_0040d469(double *param_1);
undefined4 __fastcall FUN_0040d48e(void *param_1);
undefined1 __fastcall FUN_0040d4b0(void *param_1);
undefined4 __thiscall FUN_0040d4d7(void *this,int param_1,void *param_2);
bool __thiscall FUN_0040d5e4(void *this,int param_1);
undefined4 __fastcall FUN_0040d5f6(undefined4 param_1,uint param_2,int param_3,double *param_4);
bool FUN_0040d645(undefined4 *param_1,int *param_2,uint *param_3,int param_4);
undefined4 FUN_0040d6e9(int *param_1,int *param_2,uint param_3,int param_4);
void __thiscall FUN_0040d764(void *this,int *param_1,int *param_2,uint param_3);
undefined4 * __fastcall FUN_0040d7f7(undefined4 *param_1);
undefined1 FUN_0040d83d(undefined4 *param_1,uint *param_2,int param_3);
undefined1 FUN_0040d8b1(void);
undefined4 * FUN_0040d8c0(undefined4 *param_1,undefined4 *param_2);
uint FUN_0040d9a0(undefined4 *param_1,int *param_2);
void __thiscall FUN_0040dbf3(void *this,HWND param_1,HWND param_2);
int * __thiscall FUN_0040dcae(void *this,int *param_1);
void __thiscall FUN_0040dd47(void *this,int *param_1);
void __fastcall FUN_0040dde0(int *param_1);
void __fastcall FUN_0040de22(int *param_1);
void FUN_0040de6b(undefined4 *param_1);
undefined4 FUN_0040dedf(int param_1,int *param_2);
undefined4 FUN_0040df1f(int param_1,int *param_2);
void __thiscall FUN_0040df5f(void *this,HWND param_1,HWND__ param_2);
void __fastcall FUN_0040dfe0(int *param_1);
void __fastcall FUN_0040e070(int *param_1);
void __thiscall FUN_0040e120(void *this,undefined4 param_1,int *param_2);
void FUN_0040e294(void);
void switchD_0040e2e4::caseD_5(void);
void __thiscall FUN_0040e3b0(void *this,HWND param_1,int *param_2);
undefined4 __thiscall FUN_0040e8d0(void *this,int param_1);
undefined4 FUN_0040ec8a(undefined4 param_1,undefined4 param_2,uint param_3,double param_4,undefined4 param_5,uint param_6,VARIANTARG *param_7,undefined4 param_8,undefined4 *param_9,int param_10,HWND param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,DWORD param_16,undefined4 param_17,int *param_18,HWND param_19,undefined2 *param_20,WPARAM param_21,LPARAM param_22,int *param_23,LONG param_24,HWND param_25,undefined4 param_26,undefined4 param_27,DWORD param_28,int param_29,undefined4 param_30,undefined4 param_31,undefined4 param_32,HWND param_33,undefined4 param_34,undefined4 param_35,undefined4 param_36);
undefined1 __fastcall FUN_0040eed0(void *param_1);
void __thiscall FUN_0040ef00(void *this,HWND__ param_1,HWND__ param_2);
void __thiscall FUN_0040f110(void *this,HWND param_1);
void FUN_0040f250(void);
void __fastcall FUN_0040f420(undefined4 param_1,int param_2);
void FUN_0040f97a(void);
undefined4 __thiscall FUN_0040fe30(void *this,HWND param_1,HWND param_2,double *******param_3,void *param_4);
undefined4 FUN_004115a1(void);
void __thiscall FUN_00411720(void *this,int *param_1);
undefined4 __thiscall FUN_00411820(void *this,int param_1,uint *param_2,int *param_3,int *param_4);
undefined4 __cdecl FUN_00411b90(int *param_1,char param_2,int param_3);
undefined4 FUN_00411d10(int *param_1,int *param_2);
undefined4 switchD_00411d7c::caseD_a(void);
undefined4 __fastcall switchD_00411d7c::caseD_0(int param_1);
undefined4 __cdecl FUN_004129d0(int *param_1,int *param_2,int param_3);
int * __thiscall FUN_00412b40(void *this,int param_1);
void __fastcall FUN_00412c20(int *param_1);
float10 __fastcall FUN_00412cd0(double *param_1);
void __thiscall FUN_00412d70(void *this,HWND param_1,HWND__ param_2);
undefined4 __thiscall FUN_00413200(void *this,char param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5);
undefined4 FUN_00413b67(void);
void __thiscall FUN_00413b70(void *this,HWND__ param_1,HWND param_2,uint param_3);
void FUN_00413fb7(void);
undefined4 __thiscall FUN_00414300(void *this,char param_1,void *param_2,int param_3,uint *param_4,int *param_5);
bool __fastcall FUN_004144bc(double *param_1,double *param_2);
double * __fastcall FUN_00414525(double *param_1,uint param_2,double *param_3);
undefined4 __thiscall FUN_004145e0(void *this,char param_1,int param_2,uint *param_3,int *param_4);
undefined4 FUN_004147f0(void);
undefined ** __thiscall FUN_00414800(void *this,int param_1);
undefined4 __fastcall FUN_0041a64d(undefined4 param_1,uint param_2,int param_3,int *param_4);
byte __thiscall FUN_0041a699(void *this,wchar_t *param_1,COLORREF param_2,LPCWSTR param_3,int param_4,HWND param_5,int param_6,int param_7);
void __fastcall FUN_0041a73d(uint *param_1);
undefined4 __fastcall FUN_0041a765(int *param_1,uint param_2,HWND param_3,int *param_4);
int FUN_0041a856(LPCWSTR param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,uint param_7,HWND param_8);
void __thiscall FUN_0041aad6(void *this,HWND param_1);
void FUN_0041aafc(HWND param_1,uint param_2,LPARAM param_3,ushort param_4);
void FUN_0041ab4f(HWND param_1,WPARAM param_2);
void FUN_0041abb8(int param_1,HDC param_2);
void FUN_0041abf5(HWND param_1);
void FUN_0041ad2b(HDC param_1,int param_2);
undefined1 FUN_0041ae78(HDC param_1,DWORD *param_2);
void FUN_0041af83(HDC param_1,COLORREF param_2,COLORREF param_3,DWORD param_4,DWORD param_5);
HBRUSH FUN_0041b050(COLORREF param_1,int param_2);
void FUN_0041b0ab(HDC param_1,int param_2);
void FUN_0041b11f(HWND param_1,uint param_2,HWND param_3,HWND param_4);
HWND FUN_0041b128(HWND param_1,uint param_2,HWND param_3,HWND param_4);
uint __thiscall FUN_0041b34e(void *this,HWND param_1);
void FUN_0041b385(HWND param_1,HDC param_2,HWND param_3,int param_4);
void FUN_0041b40a(int param_1,HDC param_2,HWND param_3);
uint __thiscall FUN_0041b526(void *this,HWND param_1);
LRESULT FUN_0041b55d(HWND param_1,HWND param_2,undefined2 param_3,undefined2 param_4);
void __thiscall FUN_0041b5b1(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_0041b609(void *this,undefined4 *param_1);
void __thiscall FUN_0041b63c(void *this,int *param_1,int param_2);
void FUN_0041b6f8(int param_1,int param_2);
void FUN_0041b715(HWND param_1);
void FUN_0041b73e(int param_1);
undefined4 __fastcall FUN_0041b8c3(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __thiscall FUN_0041b8fd(void *this,UINT param_1);
void FUN_0041b9ff(undefined4 *param_1,int param_2);
void __thiscall FUN_0041ba89(void *this,int param_1);
void * __fastcall FUN_0041bb08(void *param_1);
void __fastcall FUN_0041bb1d(int param_1);
void __fastcall FUN_0041bb41(int param_1);
void * __fastcall FUN_0041bb62(void *param_1);
void __fastcall FUN_0041bb77(int param_1);
undefined4 * __fastcall FUN_0041bba0(undefined4 *param_1);
undefined4 FUN_0041bcc9(undefined4 param_1,int *param_2);
int __thiscall FUN_0041becb(void *this,HWND param_1,HWND param_2,int *param_3,int param_4,int param_5);
undefined4 __thiscall FUN_0041c01f(void *this,int param_1);
uint __cdecl FUN_0041c050(int *param_1,int param_2);
void __fastcall FUN_0041c15c(int *param_1);
int __thiscall FUN_0041c177(void *this,undefined4 param_1);
void __fastcall FUN_0041c1af(int *param_1);
int FUN_0041c1f1(int param_1,int *param_2);
void FUN_0041c258(int param_1);
int FUN_0041c2a5(undefined4 *param_1);
void __thiscall FUN_0041c2d6(void *this,int *param_1);
undefined4 __thiscall FUN_0041c36b(void *this,int param_1,int *param_2,int *param_3,int *param_4);
void __thiscall FUN_0041c3c3(void *this,undefined1 *param_1);
uint __fastcall FUN_0041c451(wchar_t *param_1,uint *param_2,int param_3);
void __thiscall FUN_0041c4f6(void *this,HWND param_1,int *param_2);
void __fastcall FUN_0041c5d9(int param_1);
int * __fastcall FUN_0041c616(int *param_1);
int __thiscall FUN_0041c62b(void *this,wchar_t *param_1);
void __thiscall FUN_0041c682(void *this,undefined4 param_1,wchar_t *param_2,undefined4 param_3);
wchar_t * __fastcall FUN_0041c6f4(wchar_t *param_1);
uint __fastcall FUN_0041c724(int param_1);
undefined1 * FUN_0041c75a(void);
void FUN_0041c88b(int param_1,int *param_2);
undefined4 FUN_0041c89f(uint param_1,int param_2,int *param_3);
HMENU FUN_0041ca81(int param_1,LPCWSTR param_2,UINT param_3,UINT param_4,int param_5,int param_6,uint param_7,uint param_8,uint param_9);
void FUN_0041cc1b(void);
void FUN_0041cccd(undefined4 *param_1,undefined4 *param_2,char param_3);
int FUN_0041ceed(int param_1);
undefined4 * __fastcall FUN_0041cfa9(undefined4 *param_1);
void FUN_0041d046(int param_1,int param_2,int param_3,int param_4,int param_5);
undefined4 FUN_0041d088(undefined4 *param_1,undefined4 *param_2,HMENU param_3,int param_4,int param_5,int param_6,int param_7,uint param_8,uint param_9);
HWND FUN_0041d17c(undefined4 *param_1,DWORD param_2,LPCWSTR param_3,LPCWSTR param_4,uint param_5,int param_6,int param_7,int param_8,int param_9,HMENU param_10,undefined4 param_11,char param_12);
void __thiscall FUN_0041d1fa(void *this,undefined4 *param_1);
bool FUN_0041d26c(void);
uint __fastcall FUN_0041d298(HKEY param_1,LPCWSTR param_2,LPCWSTR param_3,HKEY param_4,LPBYTE param_5);
int __fastcall FUN_0041d319(int *param_1);
void __fastcall FUN_0041d332(double *param_1);
void __thiscall FUN_0041d35e(void *this,undefined4 *param_1,int param_2);
uint FUN_0041d37a(PCNZWCH param_1,uint param_2,PCNZWCH param_3,uint param_4,int param_5);
void __thiscall FUN_0041d3be(void *this,int *param_1);
undefined4 __fastcall FUN_0041d420(wint_t param_1);
int __fastcall FUN_0041d442(int *param_1);
uint __fastcall FUN_0041d459(ushort *param_1,int param_2,int param_3,uint *param_4,ushort *param_5);
ushort * __fastcall FUN_0041d71e(ushort *param_1,int param_2,int param_3,uint *param_4);
uint __fastcall FUN_0041d8de(ushort param_1);
void __fastcall FUN_0041d8f5(int param_1);
int __fastcall FUN_0041d90c(int param_1);
undefined4 FUN_0041d922(HWND param_1,double *param_2);
void switchD_0041d97a::caseD_58(void);
int * __thiscall FUN_0041dc1a(void *this,undefined1 param_1);
void FUN_0041dc38(void);
undefined4 __thiscall FUN_0041dc5f(void *this,LPMSG param_1);
void __fastcall FUN_0041dcbe(int *param_1);
undefined4 __thiscall FUN_0041dce0(void *this,undefined4 *param_1,uint *param_2);
int __thiscall FUN_0041dd08(void *this,undefined4 *param_1);
uint __fastcall FUN_0041dd26(double *param_1);
undefined4 * FUN_0041dd6f(void);
undefined4 * FUN_0041dd94(void);
DWORD * __fastcall FUN_0041ddc0(DWORD *param_1);
undefined * FUN_0041df3d(void);
undefined1 * __fastcall FUN_0041df5f(undefined4 *param_1);
bool __fastcall FUN_0041df77(undefined4 *param_1);
void __fastcall FUN_0041df89(undefined4 *param_1);
void __fastcall FUN_0041dfb4(undefined4 *param_1);
undefined4 __fastcall FUN_0041dfd3(undefined4 *param_1);
undefined1 * __fastcall FUN_0041dff4(undefined4 *param_1);
bool __fastcall FUN_0041e00c(undefined4 *param_1);
void __fastcall FUN_0041e01e(undefined4 *param_1);
byte __fastcall FUN_0041e049(int param_1);
undefined4 __fastcall FUN_0041e12c(undefined4 param_1,uint param_2,int param_3,double *param_4);
float10 __thiscall FUN_0041e1d2(uint param_1,double param_2);
undefined4 FUN_0041e204(int param_1,double *param_2);
undefined4 __thiscall FUN_0041e244(void *this,LPMSG param_1);
undefined4 __thiscall FUN_0041e259(void *this,int param_1,double *param_2);
float10 FUN_0041e2bd(void);
double * __fastcall FUN_0041e2e1(double *param_1);
void __fastcall FUN_0041e312(void *param_1);
void __fastcall FUN_0041e3cd(void *param_1);
void __fastcall FUN_0041e3f9(ushort *param_1,short param_2,int param_3,int param_4,ushort *param_5);
ushort * __fastcall FUN_0041e422(ushort *param_1,int param_2);
ushort * __fastcall FUN_0041e4d5(ushort *param_1,uint param_2);
bool __fastcall FUN_0041e4e2(double *param_1,double *param_2);
undefined4 FUN_0041e4f1(int param_1,size_t *param_2);
void __thiscall FUN_0041e52c(void *this,undefined4 *param_1,uint *param_2);
bool __thiscall FUN_0041e54d(void *this,undefined4 *param_1,uint *param_2);
size_t __fastcall FUN_0041e593(FILE *param_1,longlong *param_2);
undefined4 * __fastcall FUN_0041e63a(undefined4 *param_1);
void FUN_0041e65e(undefined4 *param_1,undefined4 *param_2);
void __thiscall FUN_0041e6c3(void *this,undefined8 *param_1,undefined4 param_2,uint param_3);
void __thiscall FUN_0041e717(void *this,int param_1);
bool __thiscall FUN_0041e759(void *this,int param_1);
uint FUN_0041e76a(int param_1);
undefined4 __thiscall FUN_0041e783(void *this,undefined4 param_1,double *param_2);
undefined4 * FUN_0041e7c3(void);
void __thiscall FUN_0041e85e(void *this,HWND param_1,HWND param_2);
undefined4 __fastcall FUN_0041e8a2(void *param_1,uint param_2,int param_3);
void FUN_0041e8f5(void);
void * __fastcall FUN_0041e906(void *param_1);
void FUN_0041e91e(void);
void __fastcall FUN_0041e949(int param_1);
void FUN_0041e957(void);
void __fastcall FUN_0041e968(void *param_1);
undefined4 * __fastcall FUN_0041e99b(undefined4 *param_1);
undefined4 * FUN_0041e9c3(void);
void FUN_0041e9f4(void);
undefined4 __fastcall FUN_0041ea22(undefined4 param_1,uint param_2,int param_3,int *param_4);
bool FUN_0041ea69(int param_1,HWND param_2);
undefined4 FUN_0041eb42(HWND param_1);
bool __thiscall FUN_0041eb66(void *this,int param_1,uint *param_2);
void __thiscall FUN_0041eb83(void *this,HWND param_1,int param_2);
uint __fastcall FUN_0041ec2f(undefined4 *param_1,wchar_t *param_2);
void __fastcall FUN_0041ec4e(longlong *param_1);
void FUN_0041eca0(void);
undefined4 FUN_0041ecb0(int param_1,double *param_2);
void * __fastcall FUN_0041ecf0(void *param_1);
undefined4 FUN_0041ed10(undefined4 param_1);
undefined8 __fastcall FUN_0041ed18(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
undefined8 FUN_0041edfe(void);
void FUN_0041ee75(uint param_1);
undefined8 * __cdecl FUN_0041ee80(undefined8 *param_1,undefined8 *param_2,uint param_3);
exception * __thiscall FUN_0041f4c4(void *this,exception *param_1);
void * __cdecl operator_new(uint param_1);
exception * __thiscall FUN_0041f539(void *this,byte param_1);
void __cdecl FID_conflict:_free(void *_Memory);
int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size);
size_t __cdecl _wcslen(wchar_t *_Str);
wchar_t * __cdecl _wcscat(wchar_t *_Dest,wchar_t *_Source);
wchar_t * __cdecl _wcscpy(wchar_t *_Dest,wchar_t *_Source);
uint * __cdecl FUN_00420d50(uint *param_1,byte param_2,uint param_3);
void __cdecl FID_conflict:_free(void *_Memory);
_onexit_t __cdecl __onexit(_onexit_t _Func);
void FUN_00420e4e(void);
undefined4 __cdecl __onexit_nolock(undefined4 param_1);
int __cdecl _atexit(_func_4879 *param_1);
_LocaleUpdate * __thiscall _LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1);
int __cdecl __wcsicmp(wchar_t *_Str1,wchar_t *_Str2);
int __cdecl __wcsicmp_l(wchar_t *_Str1,wchar_t *_Str2,_locale_t _Locale);
void __cdecl ___crtCorExitProcess(int param_1);
void __cdecl ___crtExitProcess(int param_1);
void __cdecl __amsg_exit(int param_1);
void __cdecl __cexit(void);
int __cdecl __cinit(int param_1);
void __cdecl __exit(int param_1);
void FUN_0042123a(void);
void __cdecl __initterm(undefined4 *param_1,undefined4 *param_2);
void __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2);
void FUN_004212b0(void);
void FUN_004212b9(void);
void __cdecl doexit(int param_1,int param_2,int param_3);
void FUN_004213dc(void);
void __cdecl _exit(int _Code);
_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1);
int __cdecl __callnewh(size_t _Size);
void __cdecl FUN_00421460(undefined4 param_1);
int __cdecl _set_new_mode(int param_1);
void __fastcall x64tow(short *param_1,uint param_2,int param_3,int param_4,int param_5);
wchar_t * __cdecl __i64tow(longlong _Val,wchar_t *_DstBuf,int _Radix);
wchar_t * __cdecl __itow(int _Value,wchar_t *_Dest,int _Radix);
void xtow(uint param_1,short *param_2,uint param_3,int param_4);
int __cdecl _wcscmp(wchar_t *_Str1,wchar_t *_Str2);
void FUN_00421621(wchar_t *param_1);
longlong __cdecl FUN_0042162a(wchar_t *param_1);
long __cdecl __wtol(wchar_t *_Str);
int __cdecl __isleadbyte_l(int _C,_locale_t _Locale);
int __cdecl _isleadbyte(int _C);
int __cdecl FID_conflict:_iswalnum(wint_t _C,_locale_t _Locale);
bool __cdecl FUN_004216ad(ushort param_1);
int __cdecl FID_conflict:__iswdigit_l(wint_t _C);
int __cdecl FID_conflict:__iswspace_l(wint_t _C,_locale_t _Locale);
int __cdecl FID_conflict:__iswxdigit_l(wint_t _C,_locale_t _Locale);
int __cdecl _wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount);
int __cdecl __swprintf(wchar_t *_Dest,wchar_t *_Format,...);
size_t __cdecl _strlen(char *_Str);
int __cdecl __wcsnicmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount);
int __cdecl __wcsnicmp_l(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
undefined1 (*) [16] __cdecl FUN_00421a06(undefined1 (*param_1) [16],undefined1 (*param_2) [16]);
void __cdecl FID_conflict:_free(void *_Memory);
int __cdecl __isdigit_l(int _C,_locale_t _Locale);
int __cdecl _isdigit(int _C);
int __cdecl FID_conflict:_wprintf(char *_Format,...);
void FUN_00421de9(void);
void __cdecl __wsplitpath(wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext);
undefined4 __cdecl __wsplitpath_helper(wchar_t *param_1,wchar_t *param_2,uint param_3,wchar_t *param_4,uint param_5,wchar_t *param_6,uint param_7,wchar_t *param_8,uint param_9);
double __cdecl __wtof(wchar_t *_Str);
double __cdecl __wtof_l(wchar_t *_Str,_locale_t _Locale);
int __cdecl __vswprintf(wchar_t *_Dest,wchar_t *_Format,va_list _Args);
int __cdecl __vswprintf_l(wchar_t *_String,size_t _Count,wchar_t *_Format,_locale_t _Plocinfo,va_list _Ap);
uintptr_t __cdecl __beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,uint _InitFlag,uint *_ThrdAddr);
void __callthreadstartex(void);
void __cdecl __endthreadex(uint _Retval);
bool __initMTAoncurrentthread(void);
void __threadstartex@4(DWORD *param_1);
void __uninitMTAoncurrentthread(void);
wchar_t * __cdecl _wcsncpy(wchar_t *_Dest,wchar_t *_Source,size_t _Count);
ushort * __cdecl FUN_004223f6(ushort *param_1,ushort param_2);
wchar_t * __cdecl _wcspbrk(wchar_t *_Str,wchar_t *_Control);
undefined1 (*) [16] __cdecl FUN_004224e6(undefined1 (*param_1) [16],ushort param_2);
char * __cdecl _strcpy(char *_Dest,char *_Source);
wchar_t * __cdecl _wcstok(wchar_t *_Str,wchar_t *_Delim);
undefined4 __cdecl FUN_0042273b(undefined4 *param_1);
int __cdecl FUN_00422765(uint param_1,int param_2);
void FUN_00422845(void);
int __cdecl __setmode_nolock(int _FileHandle,int _Mode);
int __cdecl __fileno(FILE *_File);
size_t __cdecl __fwrite_nolock(void *_DstBuf,size_t _Size,size_t _Count,FILE *_File);
size_t __cdecl _fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File);
void FUN_00422b24(void);
int __cdecl FUN_00422b2c(FILE *param_1,byte *param_2);
void FUN_00422c36(void);
int __cdecl __fflush_nolock(FILE *_File);
int __cdecl __flush(FILE *_File);
void FUN_00422ce8(void);
int __cdecl _fflush(FILE *_File);
void FUN_00422d3e(void);
int __cdecl flsall(int param_1);
void FUN_00422dee(void);
void FUN_00422e21(void);
wint_t __cdecl __towlower_l(wint_t _C,_locale_t _Locale);
wint_t __cdecl _towlower(wint_t _C);
int __cdecl __tolower_l(int _C,_locale_t _Locale);
int __cdecl _tolower(int _C);
int __cdecl __fpclass(double _X);
float10 __cdecl FUN_00423100(int param_1,undefined4 param_2);
void FUN_00423422(void);
__time64_t __cdecl __time64(__time64_t *_Time);
FILE * __cdecl __wfopen(wchar_t *_Filename,wchar_t *_Mode);
FILE * __cdecl __wfsopen(wchar_t *_Filename,wchar_t *_Mode,int _ShFlag);
void FUN_00423570(void);
int __cdecl __fclose_nolock(FILE *_File);
int __cdecl _fclose(FILE *_File);
void FUN_00423653(void);
size_t __cdecl __fread_nolock_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File);
size_t __cdecl _fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File);
size_t __cdecl _fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File);
void FUN_004238c2(void);
int __cdecl _strcmp(char *_Str1,char *_Str2);
void * __cdecl _malloc(size_t _Size);
uint __cdecl FUN_004239ee(uint param_1,byte param_2);
int __cdecl __fseek_nolock(FILE *_File,long _Offset,int _Origin);
int __cdecl _fseek(FILE *_File,long _Offset,int _Origin);
void FUN_00423b04(void);
long __cdecl __ftell_nolock(FILE *_File);
long __cdecl _ftell(FILE *_File);
void FUN_00423ec5(void);
uintptr_t __cdecl __beginthread(_StartAddress *_StartAddress,uint _StackSize,void *_ArgList);
void __callthreadstart(void);
void __cdecl __endthread(void);
void __threadstart@4(void *param_1);
void FUN_00424030(uint param_1,uint param_2);
uint __thiscall FUN_004240c0(void *this,int param_1,uint param_2);
void __thiscall FUN_00424210(void *this,int param_1,undefined4 param_2);
uint __thiscall FUN_00424330(void *this,int param_1,uint param_2);
uint __thiscall FUN_00424480(void *this,int param_1,uint param_2);
uint __thiscall FUN_004245d0(void *this,int param_1,undefined4 param_2);
uint __thiscall FUN_0042465f(void *this,int param_1,undefined4 param_2);
uint __thiscall FUN_00424700(void *this,int param_1,undefined4 param_2);
uint __thiscall FUN_0042478f(void *this,int param_1,undefined4 param_2);
uint __thiscall FUN_00424830(void *this,int param_1,undefined4 param_2);
uint __thiscall FUN_004248bf(void *this,int param_1,undefined4 param_2);
void FUN_00424960(uint param_1,int param_2,uint param_3,int param_4);
void FUN_00424990(void);
uint __thiscall FUN_004249a4(void *this,uint param_1,uint param_2);
uint __cdecl FUN_004249ad(int param_1,uint param_2);
float10 __cdecl FUN_00424a50(double param_1);
float10 __cdecl FUN_00424b80(double param_1);
int __cdecl FUN_00424c9d(uint param_1);
int __cdecl __snwprintf(wchar_t *_Dest,size_t _Count,wchar_t *_Format,...);
undefined ** FUN_00424e16(void);
void __cdecl __lock_file(FILE *_File);
void __cdecl __lock_file2(int _Index,void *_File);
void __cdecl __unlock_file(FILE *_File);
void __cdecl __unlock_file2(int _Index,void *_File);
errno_t __cdecl __itow_s(int _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
int xtow_s(uint param_1,short *param_2,uint param_3,uint param_4,uint param_5);
errno_t __cdecl __localtime64_s(tm *_Tm,__time64_t *_Time);
int __cdecl _W_expandtime(localeinfo_struct *param_1,wchar_t param_2,tm *param_3,wchar_t **param_4,uint *param_5,__lc_time_data *param_6,uint param_7);
void __cdecl _W_store_num(int param_1,int param_2,wchar_t **param_3,uint *param_4,uint param_5);
void __cdecl _W_store_number(int param_1,wchar_t **param_2,uint *param_3);
void __cdecl _W_store_str(wchar_t *param_1,wchar_t **param_2,uint *param_3);
int __cdecl _W_store_winword(localeinfo_struct *param_1,int param_2,tm *param_3,wchar_t **param_4,uint *param_5,__lc_time_data *param_6);
int __cdecl __Wcsftime_l(wchar_t *param_1,uint param_2,wchar_t *param_3,tm *param_4,__lc_time_data *param_5,localeinfo_struct *param_6);
void __cdecl __freea(void *_Memory);
size_t __cdecl _wcsftime(wchar_t *_Buf,size_t _SizeInWords,wchar_t *_Format,tm *_Tm);
int FUN_00425dfd(void);
void __cdecl fast_error_exit(int param_1);
void entry(void);
undefined8 * __cdecl FUN_00425f80(undefined8 *param_1,undefined8 *param_2,uint param_3);
undefined4 ___isa_available_init(void);
exception * __thiscall std::exception::exception(exception *this,char **param_1,int param_2);
exception * __thiscall std::exception::exception(exception *this,exception *param_1);
void __fastcall FUN_0042673b(exception *param_1);
exception * __thiscall std::exception::operator=(exception *this,exception *param_1);
exception * __thiscall FUN_00426779(void *this,byte param_1);
void __thiscall std::exception::_Copy_str(exception *this,char *param_1);
void __thiscall std::exception::_Tidy(exception *this);
char * __fastcall FUN_004267f8(int param_1);
void __CxxThrowException@8(int *param_1,byte *param_2);
void __thiscall type_info::~type_info(type_info *this);
void * __thiscall type_info::`scalar_deleting_destructor'(type_info *this,uint param_1);
size_t __cdecl __msize(void *_Memory);
void * __cdecl __calloc_crt(size_t _Count,size_t _Size);
void * __cdecl __malloc_crt(size_t _Size);
void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize);
void * __cdecl __recalloc_crt(void *_Ptr,size_t _Count,size_t _Size);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
undefined4 __cdecl __except_handler4(PEXCEPTION_RECORD param_1,PVOID param_2,undefined4 param_3);
void __cdecl __call_reportfault(int nDbgHookCode,DWORD dwExceptionCode,DWORD dwExceptionFlags);
void __cdecl FUN_00426dd8(undefined4 param_1);
void __invalid_parameter(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5);
void FUN_00426e10(void);
void __cdecl __invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5);
void __cdecl ___addlocaleref(LONG *param_1);
void __cdecl ___freetlocinfo(void *param_1);
LONG * __cdecl ___removelocaleref(LONG *param_1);
pthreadlocinfo __cdecl ___updatetlocinfo(void);
void FUN_00427143(void);
LONG * __cdecl __updatetlocinfoEx_nolock(undefined4 *param_1,LONG *param_2);
wchar_t * __cdecl CPtoLocaleName(int param_1);
int __cdecl getSystemCP(int param_1);
void __cdecl setSBCS(threadmbcinfostruct *param_1);
void __cdecl setSBUpLow(threadmbcinfostruct *param_1);
pthreadmbcinfo __cdecl ___updatetmbcinfo(void);
void FUN_004274ee(void);
int __cdecl FUN_004274f7(int param_1);
void FUN_0042766f(void);
void __cdecl __setmbcp_nolock(int param_1,threadmbcinfostruct *param_2);
undefined4 FUN_0042789a(void);
void __freefls@4(void *param_1);
void FUN_004279c2(void);
void FUN_004279ce(void);
void __cdecl __freeptd(_ptiddata _Ptd);
_ptiddata __cdecl __getptd(void);
_ptiddata __cdecl __getptd_noexit(void);
void __cdecl FUN_00427a94(int param_1,int param_2);
void FUN_00427b35(void);
void FUN_00427b3e(void);
int __cdecl __mtinit(void);
void __cdecl __mtterm(void);
ulong * __cdecl ___doserrno(void);
void __cdecl FID_conflict:__dosmaperr(ulong param_1);
int * __cdecl __errno(void);
int __cdecl __get_errno_from_oserr(ulong param_1);
void FUN_00427cab(void);
void FUN_00427cb4(void);
void __cdecl __lock(int _File);
void __cdecl __mtdeletelocks(void);
int __cdecl __mtinitlocknum(int _LockNum);
void FUN_00427e1a(void);
int __cdecl __mtinitlocks(void);
void __cdecl FUN_00427e58(int param_1);
void __cdecl FUN_00427e6d(undefined4 param_1);
void __cdecl FUN_00427e8b(DWORD param_1);
void __cdecl FUN_00427eaa(DWORD param_1);
void __cdecl FUN_00427ec9(DWORD param_1,LPVOID param_2);
WORD __cdecl ___crtGetShowWindowMode(void);
bool FUN_00427f0c(void);
void FUN_00427f4a(void);
void __cdecl FUN_00428189(LPTOP_LEVEL_EXCEPTION_FILTER param_1);
void __cdecl ___crtTerminateProcess(UINT uExitCode);
LONG __cdecl ___crtUnhandledException(EXCEPTION_POINTERS *exceptionInfo);
void __cdecl __FF_MSGBANNER(void);
wchar_t * __cdecl __GET_RTERRMSG(int param_1);
void __cdecl __NMSG_WRITE(int param_1);
PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva);
BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget);
BOOL __cdecl __ValidateImageBase(PBYTE pImageBase);
void __initp_misc_cfltcvt_tab(void);
void __cdecl terminate(void);
void FUN_00428574(void);
void __cdecl FUN_00428585(undefined4 param_1);
void __cdecl FUN_00428592(undefined4 param_1);
void FUN_0042859f(void);
void __cdecl FUN_004285ac(undefined4 param_1);
int __cdecl _raise(int _SigNum);
void FUN_00428743(void);
uint __cdecl siglookup(int param_1,uint param_2);
void __cdecl __ftbuf(int _Flag,FILE *_File);
int __cdecl __stbuf(FILE *_File);
undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4);
ulong __cdecl wcstoxl(wchar_t *param_1,wchar_t **param_2,int param_3,int param_4);
long __cdecl _wcstol(wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
__uint64 __cdecl wcstoxq(localeinfo_struct *param_1,wchar_t *param_2,wchar_t **param_3,int param_4,int param_5);
longlong __cdecl __wcstoi64(wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
int __cdecl _iswctype(wint_t _C,wctype_t _Type);
uint __cdecl FUN_00428e63(byte param_1,FILE *param_2);
void __cdecl FUN_00428fb0(FILE *param_1,ushort *param_2,localeinfo_struct *param_3,wchar_t *param_4);
void __cdecl write_char(wchar_t param_1,FILE *param_2,int *param_3);
void __cdecl write_multi_char(wchar_t param_1,int param_2,FILE *param_3,int *param_4);
void __cdecl write_string(wchar_t *param_1,int param_2,FILE *param_3,int *param_4,int *param_5);
bool FUN_00429ca7(void);
int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale);
errno_t __cdecl _wcsncpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src,rsize_t _MaxCount);
FLT __cdecl __wfltin2(FLT _Fit,wchar_t *_Str,_locale_t _Locale);
uint __cdecl ___wstrgtold12_l(_LDBL12 *pld12,wchar_t **p_end_ptr,wchar_t *str,int mult12,int scale,int decpt,int implicit_E,_locale_t _Locale);
void __fastcall __security_check_cookie(int param_1);
void __cdecl __fpmath(int param_1);
void __cfltcvt_init(void);
int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr);
int __cdecl ___lock_fhandle(int _Filehandle);
void FUN_0042a970(void);
int FUN_0042a979(void);
void FUN_0042aa4d(void);
void FUN_0042ab15(void);
int __cdecl __free_osfhnd(int param_1);
undefined4 __cdecl FUN_0042aba4(uint param_1);
int __cdecl __set_osfhnd(int param_1,intptr_t param_2);
void __cdecl __unlock_fhandle(int _Filehandle);
undefined4 FUN_0042acb3(void);
void FUN_0042af58(void);
undefined4 __cdecl FUN_0042af61(WCHAR *param_1,WCHAR *param_2,WCHAR *param_3);
void FUN_0042b01a(void);
void __cdecl FUN_0042b043(WCHAR *param_1,WCHAR *param_2,WCHAR *param_3);
void __cdecl FUN_0042b86d(FILE *param_1,byte *param_2,localeinfo_struct *param_3,wchar_t *param_4);
void __cdecl write_char(byte param_1,FILE *param_2,int *param_3);
void __cdecl write_multi_char(byte param_1,int param_2,FILE *param_3,int *param_4);
void __cdecl write_string(byte *param_1,int param_2,FILE *param_3,int *param_4,int *param_5);
DWORD __cdecl FUN_0042c4df(uint param_1);
void FUN_0042c5a4(void);
int __cdecl ___crtLCMapStringW(LPCWSTR _LocaleName,DWORD _DWMapFlag,LPCWSTR _LpSrcStr,int _CchSrc,LPWSTR _LpDestStr,int _CchDest);
int __cdecl __crtLCMapStringA_stat(localeinfo_struct *param_1,wchar_t *param_2,ulong param_3,char *param_4,int param_5,char *param_6,int param_7,int param_8,int param_9);
int __cdecl ___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError);
void __cdecl FUN_0042c821(int param_1,uint param_2,int *param_3);
float10 __cdecl __set_exp(undefined8 param_1,short param_2);
undefined4 __cdecl __sptype(int param_1,uint param_2);
int __cdecl __errcode(uint param_1);
void __cdecl __except1(uint param_1,int param_2,undefined8 param_3,double param_4,uint param_5);
bool __cdecl __handle_exc(uint param_1,double *param_2,uint param_3);
float10 __cdecl __handle_qnan1(int param_1,double param_2);
void __cdecl __raise_exc(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6);
void __cdecl __raise_exc_ex(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6,int param_7);
void __cdecl __set_errno_from_matherr(int param_1);
float10 __cdecl __umatherr(int param_1,int param_2);
void __cdecl ___set_fpsr_sse2(uint param_1);
int __clrfp(void);
int __ctrlfp(void);
void FUN_0042d11f(void);
int __statfp(void);
void FUN_0042d1a0(void);
float10 __cdecl FUN_0042d1b9(double param_1,int param_2,uint param_3);
void __fastcall __trandisp1(undefined4 param_1,int param_2);
void __fastcall __trandisp2(undefined4 param_1,int param_2);
float10 __fastcall FUN_0042e0d0(undefined4 param_1,int param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
float10 __fastcall __startOneArgErrorHandling(undefined4 param_1,int param_2,ushort param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
undefined1  [10] FUN_0042e130(void);
void FUN_0042e145(void);
undefined4 FUN_0042e15c(void);
uint __fastcall __fload_withFB(undefined4 param_1,int param_2);
uint __cdecl FUN_0042e1b8(undefined4 param_1,uint param_2);
void FUN_0042e1ce(void);
void __fastcall __math_exit(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void __fastcall FUN_0042e219(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
undefined4 __cdecl FUN_0042e2bc(double param_1);
undefined4 __cdecl FUN_0042e322(int param_1,int param_2,int param_3,int param_4,double *param_5);
undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4);
FILE * __cdecl __getstream(void);
void FUN_0042e5d7(void);
FILE * __cdecl __wopenfile(wchar_t *_Filename,wchar_t *_Mode,int _ShFlag,FILE *_File);
void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3);
void FUN_0042e956(int param_1);
void __fastcall _EH4_CallFilterFunc(undefined *param_1);
void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE);
void __fastcall _EH4_GlobalUnwind2(PVOID param_1,PEXCEPTION_RECORD param_2);
void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4);
undefined4 __cdecl FUN_0042e9d2(uint param_1);
void FUN_0042ea73(void);
undefined4 __cdecl FUN_0042ea9c(uint param_1);
void __cdecl __freebuf(FILE *_File);
uint __cdecl FUN_0042eb66(FILE *param_1);
errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount);
uint __cdecl FUN_0042ed06(uint param_1,LPWSTR param_2,uint param_3);
void FUN_0042ede5(void);
uint __cdecl FUN_0042ee0e(uint param_1,LPWSTR param_2,uint param_3);
ulonglong __fastcall __aullshr(byte param_1,uint param_2);
long __cdecl FUN_0042f5df(uint param_1,long param_2,int param_3);
void FUN_0042f698(void);
long __cdecl __lseek_nolock(int _FileHandle,long _Offset,int _Origin);
longlong __cdecl FUN_0042f733(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_0042f805(void);
longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin);
void __alloca_probe(void);
void FUN_0042f8d0(void);
float10 FUN_0042f8e8(int param_1,uint param_2);
float10 __cdecl FUN_0042f8ee(int param_1,uint param_2);
void __fastcall __cintrindisp1(undefined4 param_1,int param_2);
void __cdecl __ctrandisp2(uint param_1,int param_2,uint param_3,int param_4);
void FUN_0042fc4c(void);
void FUN_0042fc53(void);
void __cdecl __ctrandisp1(uint param_1,int param_2);
float10 __cdecl __fload(uint param_1,int param_2);
void FUN_0042fe10(void);
float10 FUN_0042fe28(double param_1);
float10 __cdecl FUN_0042fe2e(double param_1);
float10 __cdecl FUN_00430098(double param_1);
void FUN_00430370(void);
float10 FUN_00430388(double param_1);
float10 __cdecl FUN_0043038e(double param_1);
void FUN_004308d0(void);
float10 FUN_004308e8(double param_1);
float10 __cdecl FUN_004308ee(double param_1);
void __fastcall FUN_00430e50(void *param_1);
float10 FUN_00430e68(double param_1);
float10 __thiscall FUN_00430e6e(void *param_1,int param_2,undefined4 param_3);
void __fastcall FUN_004310b0(void *param_1);
float10 FUN_004310c8(double param_1);
float10 __thiscall FUN_004310ce(void *param_1,int param_2,undefined4 param_3);
void __fastcall FUN_00431260(void *param_1);
float10 FUN_00431278(double param_1);
float10 __thiscall FUN_0043127e(void *param_1,int param_2,undefined4 param_3);
void __cdecl ___libm_error_support(double *param_1,undefined8 *param_2,double *param_3,int param_4);
float10 __cdecl FUN_00431710(double param_1);
float10 __cdecl FUN_004317e3(double param_1);
int FUN_004318b6(void);
void FUN_0043194a(void);
undefined4 * FUN_00431953(void);
undefined4 * FUN_00431959(void);
undefined4 * FUN_0043195f(void);
undefined ** FUN_00431965(void);
errno_t __cdecl __get_daylight(int *_Daylight);
errno_t __cdecl __get_dstbias(long *_Daylight_savings_bias);
errno_t __cdecl __get_timezone(long *_Timezone);
errno_t __cdecl __gmtime64_s(tm *_Tm,__time64_t *_Time);
void __cdecl ___tzset(void);
void FUN_00431c59(void);
int __cdecl __isindst(tm *_Time);
void FUN_00431c9f(void);
bool __cdecl __isindst_nolock(int *param_1);
void __tzset_nolock(void);
void FUN_00432120(void);
void __cdecl cvtdate(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11);
undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 __allrem(uint param_1,uint param_2,uint param_3,uint param_4);
errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
errno_t __cdecl _wcscpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src);
size_t __cdecl __mbstowcs_l_helper(LPWSTR param_1,byte *param_2,uint param_3,localeinfo_struct *param_4);
errno_t __cdecl __mbstowcs_s_l(size_t *_PtNumOfCharConverted,wchar_t *_DstBuf,size_t _SizeInWords,char *_SrcBuf,size_t _MaxCount,_locale_t _Locale);
undefined4 __cdecl FID_conflict:GetTableIndexFromLocaleName(wchar_t *param_1);
void __cdecl FUN_0043284c(wchar_t *param_1,DWORD param_2,PCNZWCH param_3,int param_4,PCNZWCH param_5,int param_6);
undefined4 __cdecl FID_conflict:_AtlDownlevelLocaleNameToLCID(wchar_t *param_1);
void __cdecl FUN_004328c2(wchar_t *param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4,LPWSTR param_5,int param_6);
void __cdecl FUN_0043290b(wchar_t *param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4,LPWSTR param_5,int param_6);
void __cdecl FUN_00432940(wchar_t *param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,int param_6);
int __cdecl __wcsnicmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount);
uint __alloca_probe_16(void);
uint __alloca_probe_8(void);
long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *param_1);
int __cdecl __wsetargv(void);
void __cdecl wparse_cmdline(short *param_1,undefined4 *param_2,short *param_3,int *param_4,int *param_5);
int __cdecl __wsetenvp(void);
void __cdecl FUN_00432d96(undefined4 param_1);
int __cdecl __set_error_mode(int _Mode);
void __cdecl ___security_init_cookie(void);
LPVOID __cdecl ___crtGetEnvironmentStringsW(void);
ushort * __wwincmdln(void);
void __cdecl type_info::_Type_info_dtor(type_info *param_1);
void FUN_00432f8d(void);
void * __cdecl _realloc(void *_Memory,size_t _NewSize);
void * __cdecl __recalloc(void *_Memory,size_t _Count,size_t _Size);
LPVOID __cdecl __calloc_impl(uint param_1,uint param_2,int *param_3);
void FUN_00433124(void);
void __cdecl ___free_lconv_mon(int param_1);
void __cdecl ___free_lconv_num(undefined4 *param_1);
void __cdecl ___free_lc_time(undefined4 *param_1);
int __cdecl __crtGetStringTypeA_stat(localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,int param_6,int param_7);
BOOL __cdecl ___crtGetStringTypeA(_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,int _Code_page,BOOL _BError);
UINT __cdecl ____lc_codepage_func(void);
void __cdecl ___raise_securityfailure(EXCEPTION_POINTERS *param_1);
void __cdecl ___report_gsfailure(void);
errno_t __cdecl _wcscat_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src);
size_t __cdecl _wcsnlen(wchar_t *_Src,size_t _MaxCount);
int __cdecl ___crtMessageBoxW(LPCWSTR _LpText,LPCWSTR _LpCaption,UINT _UType);
void __cdecl _abort(void);
errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount);
byte __cdecl FUN_00433bf2(uint param_1);
int __cdecl __wchartodigit(ushort param_1);
longlong __allmul(uint param_1,int param_2,uint param_3,int param_4);
void __cdecl __getbuf(FILE *_File);
bool FUN_00433e6a(void);
wint_t __cdecl __fputwc_nolock(wchar_t _Ch,FILE *_File);
int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale);
int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes);
INTRNCVT_STATUS __cdecl __ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D);
INTRNCVT_STATUS __cdecl __ld12tof(_LDBL12 *_Ifp,_CRT_FLOAT *_F);
void __cdecl ___mtold12(char *param_1,int param_2,uint *param_3);
errno_t __cdecl __cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps);
errno_t __cdecl __cfltcvt_l(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps,_locale_t plocinfo);
int __cdecl __cftoa_l(double *param_1,undefined1 *param_2,uint param_3,uint param_4,int param_5,localeinfo_struct *param_6);
errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps);
int __cdecl __cftoe2_l(undefined1 *param_1,uint param_2,int param_3,int param_4,int *param_5,char param_6,localeinfo_struct *param_7);
void __cdecl __cftoe_l(double *param_1,undefined1 *param_2,uint param_3,int param_4,int param_5,localeinfo_struct *param_6);
undefined4 __cdecl __cftof2_l(char *param_1,int param_2,uint param_3,int *param_4,char param_5,localeinfo_struct *param_6);
void __cdecl __cftof_l(double *param_1,char *param_2,int param_3,uint param_4,localeinfo_struct *param_5);
void __cdecl __cftog_l(double *param_1,char *param_2,uint param_3,uint param_4,int param_5,localeinfo_struct *param_6);
void __cdecl __cropzeros(char *_Buf);
void __cdecl __cropzeros_l(char *_Buf,_locale_t _Locale);
void __cdecl __fassign(int flag,char *argument,char *number);
void __cdecl __fassign_l(int flag,char *argument,char *number,_locale_t param_4);
void __cdecl __forcdecpt(char *_Buf);
void __cdecl __forcdecpt_l(char *_Buf,_locale_t _Locale);
int __cdecl __positive(double *arg);
void __cdecl __shift(char *param_1,int param_2);
void __setdefaultprecision(void);
wint_t __cdecl __putwch_nolock(wchar_t _WCh);
errno_t __cdecl __wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale);
errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh);
undefined4 FUN_00435a02(void);
void __cdecl __87except(int param_1,int *param_2,ushort *param_3);
float10 __cdecl __frnd(double param_1);
HANDLE __cdecl ___createFile(LPCWSTR param_1,DWORD param_2,DWORD param_3,LPSECURITY_ATTRIBUTES param_4,DWORD param_5,uint param_6,uint param_7);
errno_t __cdecl FID_conflict:__sopen_helper(char *_Filename,int _OFlag,int _ShFlag,int _PMode,int *_PFileHandle,int _BSecure);
void FUN_00435c4c(void);
int __cdecl FUN_00435c78(undefined4 *param_1,uint *param_2,LPCWSTR param_3,uint param_4,int param_5,byte param_6);
errno_t __cdecl __wsopen_s(int *_FileHandle,wchar_t *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionFlag);
void __cdecl __global_unwind2(PVOID param_1);
void __cdecl __local_unwind2(int param_1,uint param_2);
void __NLG_Notify(ulong param_1);
void FUN_00436524(void);
long __cdecl _atol(char *_Str);
char * __cdecl __getenv_helper_nolock(char *param_1);
undefined2 __cdecl FUN_004365bf(undefined2 param_1,FILE *param_2);
undefined1 (*) [16] __cdecl FUN_00436720(undefined1 (*param_1) [16],byte param_2);
errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt);
int __cdecl FID_conflict:__atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale);
int __cdecl FID_conflict:__atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale);
void __cdecl ___dtold(uint *param_1,uint *param_2);
STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes);
undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4);
errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask);
ulong __cdecl strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5);
long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix);
void __cdecl ___initconout(void);
int __cdecl __chsize_nolock(int _FileHandle,longlong _Size);
int __cdecl ___wtomb_environ(void);
int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount);
int __cdecl __mbsnbicoll_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale);
uint __cdecl ___strgtold12_l(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,int implicit_E,_locale_t _Locale);
void __cdecl$I10_OUTPUT(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6);
uint __cdecl ___hw_cw_sse2(uint param_1);
uint __cdecl __control87(uint _NewValue,uint _Mask);
uint __cdecl __hw_cw(uint param_1);
int __cdecl ___crtsetenv(char **_POption,int _Primary);
int * __cdecl copy_environ(int *param_1);
int __cdecl findenv(uchar *param_1,size_t param_2);
int __cdecl __strnicoll_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale);
int __cdecl __crtCompareStringA_stat(localeinfo_struct *param_1,wchar_t *param_2,ulong param_3,char *param_4,int param_5,char *param_6,int param_7,int param_8);
int __cdecl strncnt(char *param_1,int param_2);
int __cdecl ___crtCompareStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwCmpFlags,LPCSTR _LpString1,int _CchCount1,LPCSTR _LpString2,int _CchCount2,int _Code_page);
char * __cdecl __strdup(char *_Src);
uchar * __cdecl __mbschr(uchar *_Str,uint _Ch);
uchar * __cdecl __mbschr_l(uchar *_Str,uint _Ch,_locale_t _Locale);
int __cdecl __strnicmp_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale);
uint * __cdecl FUN_00439010(uint *param_1,char param_2);
int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount);
BOOL IsProcessorFeaturePresent(DWORD ProcessorFeature);
void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue);
VARIANTARG * __thiscall FUN_004391ae(void *this,VARIANTARG *param_1);
VARIANTARG * __thiscall FUN_004391cc(void *this,double *param_1);
void * __thiscall FUN_0043943c(void *this,double *param_1);
VARIANTARG * __fastcall FUN_00439469(VARIANTARG *param_1);
void __fastcall FUN_0043947f(VARIANTARG *param_1);
void __thiscall FUN_00439493(void *this,VARIANTARG *param_1);
void __thiscall FUN_004394af(void *this,double *param_1);
SAFEARRAY * FUN_004394e1(int *param_1);
SAFEARRAY * FUN_00439629(int *param_1);
undefined4 * __thiscall FUN_0043968c(void *this,int *param_1);
undefined4 * __thiscall FUN_004396ca(void *this,undefined4 param_1);
undefined4 * __thiscall FUN_00439701(void *this,uint *param_1);
undefined4 * __thiscall FUN_0043974c(void *this,undefined4 *param_1);
void __fastcall FUN_00439797(undefined4 *param_1);
undefined4 * __fastcall FUN_004397c3(undefined4 *param_1);
undefined4 * __fastcall FUN_004397d8(undefined4 *param_1);
undefined4 * __fastcall FUN_004397ed(undefined4 *param_1);
void FUN_00439802(int param_1);
undefined4 FUN_00439816(int param_1,int param_2,int param_3,undefined2 *param_4);
undefined4 FUN_00439856(int param_1,int param_2,int param_3,ushort *param_4,int param_5);
undefined4 FUN_004398bc(undefined4 param_1,undefined4 *param_2);
undefined4 FUN_004398de(int *param_1,void *param_2,undefined4 *param_3);
LONG FUN_00439928(undefined4 *param_1);
bool __fastcall FUN_00439950(void *param_1,void *param_2);
undefined4 * __thiscall FUN_00439962(void *this,int *param_1);
void __fastcall thunk_FUN_00439983(int *param_1);
void __fastcall FUN_00439983(int *param_1);
int __thiscall FUN_00439990(void *this,undefined4 *param_1);
bool __thiscall FUN_004399c9(void *this,int param_1);
bool __thiscall FUN_004399da(void *this,int param_1);
undefined4 __fastcall FUN_004399f2(int *param_1,undefined4 param_2);
void __fastcall FUN_00439aa3(int param_1);
HRESULT __fastcall FUN_00439abf(LPCOLESTR param_1,IID *param_2,LPOLESTR param_3);
int __fastcall FUN_00439b30(int *param_1,int param_2,LPCWSTR param_3,undefined4 param_4,undefined4 *param_5);
undefined4 __fastcall FUN_00439e5b(wchar_t *param_1,wchar_t *param_2,undefined4 *param_3);
bool __fastcall FUN_00439eb3(int *param_1,int param_2);
undefined4 __fastcall FUN_0043a0ec(undefined4 *param_1);
DWORD __fastcall FUN_0043a14d(wchar_t *param_1,wchar_t *param_2,LPCLSID param_3,LPCWSTR param_4,LPCWSTR param_5);
int __fastcall FUN_0043a2cc(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 __fastcall FUN_0043a4f9(wchar_t *param_1,undefined4 *param_2);
void __fastcall FUN_0043a533(DWORD param_1);
int __fastcall FUN_0043a541(int *param_1);
int * __thiscall FUN_0043a58f(void *this,int *param_1,undefined4 *param_2);
bool __fastcall FUN_0043a5ea(int param_1);
void FUN_0043a5f3(undefined4 *param_1);
undefined4 * __thiscall FUN_0043a64d(void *this,byte param_1);
undefined1 __thiscall FUN_0043a66c(void *this,HANDLE param_1,PSID param_2,int param_3);
undefined1 __thiscall FUN_0043a867(void *this,HANDLE param_1,PSID param_2,int param_3);
undefined4 __thiscall FUN_0043aa62(void *this,undefined4 *param_1,undefined4 param_2,PDWORD param_3);
undefined4 __thiscall FUN_0043aac3(void *this,undefined4 *param_1,undefined4 param_2,PDWORD param_3);
void __fastcall FUN_0043ab24(LPVOID param_1);
int * __fastcall FUN_0043ab39(int *param_1);
void __fastcall FUN_0043ab84(undefined4 *param_1);
undefined4 __fastcall FUN_0043abbb(HANDLE param_1,PSECURITY_INFORMATION param_2,undefined4 *param_3,undefined4 param_4,LPDWORD param_5);
undefined4 __fastcall FUN_0043ac22(undefined4 *param_1,DWORD param_2);
undefined4 __thiscall FUN_0043ac56(void *this,SIZE_T param_1);
undefined1 FUN_0043ac8c(void);
undefined1 FUN_0043acc5(LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,uint param_4,undefined4 param_5,wchar_t *param_6,uint param_7,LPCWSTR param_8,LPSTARTUPINFOW param_9,LPPROCESS_INFORMATION param_10);
void FUN_0043af64(LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,HANDLE param_4,undefined4 param_5,wchar_t *param_6,uint param_7,LPCWSTR param_8,LPSTARTUPINFOW param_9,LPPROCESS_INFORMATION param_10);
bool FUN_0043af7d(LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,HANDLE param_4,undefined4 param_5,LPWSTR param_6,uint param_7,LPCWSTR param_8,LPSTARTUPINFOW param_9,LPPROCESS_INFORMATION param_10);
char __fastcall FUN_0043b020(int *param_1);
bool __fastcall FUN_0043b0cd(int param_1);
bool FUN_0043b106(LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,char param_4,undefined4 param_5,PHANDLE param_6);
bool __fastcall FUN_0043b134(int *param_1);
undefined1 __thiscall FUN_0043b1cc(void *this,void *param_1,undefined4 *param_2);
void FUN_0043b263(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 FUN_0043b2d4(undefined4 *param_1);
undefined4 __thiscall FUN_0043b310(void *this,char param_1);
undefined4 __fastcall FUN_0043b33f(undefined4 *param_1);
undefined4 __thiscall FUN_0043b358(void *this,uint param_1,int param_2,uint param_3,UINT param_4);
bool __thiscall FUN_0043b44c(void *this,char param_1);
undefined4 __thiscall FUN_0043b478(void *this,int *param_1);
undefined4 __thiscall FUN_0043b500(void *this,int *param_1);
bool __thiscall FUN_0043b520(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_0043b591(void *this,LRESULT *param_1);
uint __thiscall FUN_0043b5b0(void *this,void *param_1);
undefined4 __thiscall FUN_0043b660(void *this,LPARAM *param_1);
bool __thiscall FUN_0043b67d(void *this,LPARAM *param_1);
bool __thiscall FUN_0043b700(void *this,WPARAM param_1);
bool __thiscall FUN_0043b781(void *this,LPARAM *param_1,LRESULT *param_2);
bool __thiscall FUN_0043b80a(void *this,void *param_1);
uint __thiscall FUN_0043b907(void *this,LPARAM *param_1);
uint __thiscall FUN_0043b9f0(void *this,WPARAM param_1);
undefined4 __thiscall FUN_0043bad7(void *this,undefined4 *param_1);
WPARAM __thiscall FUN_0043bb97(void *this,undefined4 *param_1,undefined4 param_2);
undefined4 __thiscall FUN_0043bc77(void *this,char param_1,void *param_2);
void __fastcall FUN_0043bd49(undefined4 *param_1);
undefined4 __thiscall FUN_0043bd6b(void *this,WPARAM param_1,undefined4 param_2,void *param_3);
bool __thiscall FUN_0043be11(void *this,WPARAM param_1);
undefined4 __thiscall FUN_0043be2f(void *this,char param_1,WPARAM param_2,int param_3);
undefined4 __fastcall FUN_0043bec0(undefined4 *param_1);
undefined4 __thiscall FUN_0043bf0c(void *this,WPARAM param_1);
bool __fastcall FUN_0043bf31(undefined4 *param_1);
undefined1 __thiscall FUN_0043bf59(void *this,WPARAM param_1,void *param_2);
undefined4 __thiscall FUN_0043bff0(void *this,int param_1);
undefined4 __thiscall FUN_0043c094(void *this,LRESULT *param_1);
uint __thiscall FUN_0043c0bf(void *this,void *param_1,char param_2);
bool __thiscall FUN_0043c134(void *this,void *param_1);
bool __thiscall FUN_0043c14a(void *this,void *param_1,char param_2);
undefined1 __thiscall FUN_0043c189(void *this,int param_1,int *param_2);
LRESULT __thiscall FUN_0043c2de(void *this,void *param_1);
LRESULT __thiscall FUN_0043c3cf(void *this,void *param_1);
undefined1 __thiscall FUN_0043c410(void *this,LRESULT param_1,int param_2,int *param_3,undefined4 param_4);
LRESULT FUN_0043c594(LRESULT param_1,undefined4 *param_2);
undefined1 __thiscall FUN_0043c65b(void *this,int *param_1,undefined4 param_2);
bool __thiscall FUN_0043c6b1(void *this,void *param_1,void *param_2);
bool __thiscall FUN_0043c6e8(void *this,undefined4 param_1,void *param_2);
WPARAM __thiscall FUN_0043c7aa(void *this,void *param_1);
bool __thiscall FUN_0043c7d8(void *this,void *param_1);
bool __fastcall FUN_0043c81e(undefined4 *param_1,wchar_t *param_2);
void FUN_0043c82d(HWND param_1,char param_2);
undefined4 FUN_0043c876(HWND param_1,HWND param_2);
uint FUN_0043c897(void *param_1,undefined4 *param_2,void *param_3,uint *param_4,uint param_5);
uint __thiscall FUN_0043c9e0(void *this,HWND param_1,void *param_2);
void FUN_0043cac4(HWND param_1,void *param_2);
undefined4 __thiscall FUN_0043cad0(void *this,HWND param_1);
undefined4 * __thiscall FUN_0043cb40(void *this,undefined4 *param_1,uint param_2,uint param_3);
undefined1 __thiscall FUN_0043cb82(void *this,HWND param_1,int *param_2);
bool __thiscall FUN_0043cefd(void *this,HWND param_1,undefined4 param_2);
void FUN_0043cf50(HWND param_1,void *param_2);
undefined4 __thiscall FUN_0043cf5c(void *this,HWND param_1);
undefined4 __thiscall FUN_0043d2cf(void *this,undefined4 param_1);
undefined4 * __thiscall FUN_0043d2ff(void *this,char *param_1);
void FUN_0043d342(HWND param_1,char param_2);
undefined1 __fastcall FUN_0043d37a(undefined4 *param_1);
undefined1 __thiscall FUN_0043d38b(void *this,char param_1);
uint __thiscall FUN_0043d3a8(void *this,wchar_t *param_1);
void __thiscall FUN_0043d3fb(void *this,void *param_1);
HWND __fastcall FUN_0043d42b(undefined4 *param_1);
HWND FUN_0043d463(HWND param_1);
uint __thiscall FUN_0043d482(void *this,LPRECT param_1,char param_2);
uint __thiscall FUN_0043d4f2(void *this,undefined4 *param_1);
LRESULT __fastcall FUN_0043d59a(undefined4 *param_1);
bool __thiscall FUN_0043d5bc(void *this,undefined4 *param_1);
bool __fastcall FUN_0043d5fd(undefined4 *param_1);
bool __fastcall FUN_0043d60b(undefined4 *param_1);
bool __thiscall FUN_0043d619(void *this,int param_1,int param_2,int param_3,int param_4);
undefined1 __thiscall FUN_0043d63b(void *this,char param_1);
int __thiscall FUN_0043d658(void *this,int param_1);
void FUN_0043d6f4(undefined4 *param_1);
void FUN_0043d83a(void *param_1);
void FUN_0043d8a7(HWND param_1,void *param_2);
bool __thiscall FUN_0043d8b3(void *this,HWND param_1);
bool __thiscall FUN_0043db7a(void *this,HWND param_1);
void FUN_0043dbbf(HWND param_1,void *param_2);
undefined4 __thiscall FUN_0043dbcb(void *this,HWND param_1);
void __fastcall FUN_0043dc8c(undefined4 *param_1);
undefined4 * __fastcall FUN_0043dc9a(undefined4 *param_1);
undefined4 * __thiscall FUN_0043dcb1(void *this,byte param_1);
int * __thiscall FUN_0043dcdf(void *this,int *param_1,int *param_2,int param_3,int *param_4);
undefined4 * __thiscall FUN_0043df60(void *this,undefined4 param_1);
void __fastcall FUN_0043dff4(int *param_1);
void __fastcall FUN_0043e041(undefined4 *param_1);
int * __fastcall FUN_0043e05d(int *param_1);
undefined4 * __fastcall FUN_0043e072(undefined4 *param_1);
undefined4 FUN_0043e087(int *param_1,int param_2);
int * __thiscall FUN_0043e137(void *this,int *param_1,int param_2,int *param_3);
void FUN_0043e184(int param_1);
void __fastcall FUN_0043e19b(int *param_1,int *param_2);
void __fastcall FUN_0043e213(int *param_1);
int FUN_0043e34e(int param_1,int param_2,int param_3);
void FUN_0043e39f(int param_1);
undefined4 FUN_0043e3cc(int param_1,LPRECT param_2);
undefined4 FUN_0043e3f5(int param_1,undefined4 *param_2);
undefined4 FUN_0043e411(int param_1,undefined4 *param_2);
undefined4 FUN_0043e43f(void);
undefined4 FUN_0043e461(int param_1,undefined4 *param_2);
undefined4 FUN_0043e475(int param_1,undefined4 *param_2);
undefined4 FUN_0043e49b(int param_1,undefined4 *param_2,undefined4 *param_3,LPRECT param_4,LPRECT param_5,undefined4 *param_6);
void __thiscall FUN_0043e4fc(void *this,int *param_1);
undefined4 FUN_0043e5a2(undefined4 param_1,int param_2);
undefined4 __thiscall FUN_0043e600(void *this,void *param_1,int *param_2);
undefined4 __thiscall FUN_0043e6d2(void *this,void *param_1,undefined4 *param_2);
undefined4 FUN_0043e757(int param_1);
undefined4 FUN_0043e76a(int param_1);
undefined4 FUN_0043e77d(int *param_1,undefined4 param_2);
undefined4 FUN_0043e824(int param_1);
undefined4 FUN_0043e846(int param_1);
undefined4 FUN_0043e859(int param_1);
void FUN_0043e86c(int param_1);
void FUN_0043e88c(undefined4 param_1,LPBC param_2,LPCOLESTR param_3,ULONG *param_4,LPMONIKER *param_5);
void FUN_0043e8a5(int param_1,void *param_2,int *param_3);
void FUN_0043e8bd(int param_1,void *param_2,int *param_3);
void FUN_0043e8d5(int param_1,void *param_2,undefined4 *param_3);
void FUN_0043e8ed(int param_1);
undefined4 FUN_0043e903(int param_1,int *param_2);
undefined4 FUN_0043e938(int param_1,int param_2);
undefined4 FUN_0043e95a(LPOLEINPLACEFRAME param_1,undefined4 param_2,HOLEMENU param_3,HWND param_4);
undefined4 * __fastcall FUN_0043e9af(undefined4 *param_1);
void __thiscall FUN_0043ea32(void *this,undefined4 param_1,HWND param_2);
void __thiscall CRect::NormalizeRect(CRect *this);
void __fastcall FUN_0043ea80(int param_1);
undefined4 __fastcall FUN_0043ea9d(int *param_1);
void __fastcall FUN_0043ec80(int param_1);
void __thiscall FUN_0043ed02(void *this,int param_1,int param_2,int param_3);
void __thiscall FUN_0043eea7(void *this,int param_1);
undefined4 FUN_0043eed3(int param_1,int param_2,uint param_3,uint param_4);
undefined4 FUN_0043eeeb(int param_1,int param_2,uint param_3,uint param_4);
void FUN_0043ef82(undefined4 *param_1);
int __thiscall FUN_0043efbc(void *this,undefined4 *param_1);
undefined4 __thiscall FUN_0043efda(void *this,undefined4 *param_1);
undefined4 * FUN_0043eff5(undefined4 *param_1,undefined4 *param_2);
uint FUN_0043f053(undefined4 *param_1,int *param_2);
undefined4 __thiscall FUN_0043f16a(void *this,int *param_1);
uint __fastcall FUN_0043f1c6(wchar_t *param_1,undefined4 *param_2);
undefined4 * __thiscall FUN_0043f1f4(void *this,int param_1);
void __fastcall FUN_0043f276(undefined4 *param_1);
void __fastcall FUN_0043f28f(undefined4 *param_1);
undefined4 * __thiscall FUN_0043f2dd(void *this,byte param_1);
VARIANTARG * __fastcall FUN_0043f2fc(VARIANTARG *param_1);
undefined4 * __fastcall FUN_0043f31b(undefined4 *param_1);
void __fastcall FUN_0043f330(int param_1);
undefined4 FUN_0043f34d(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,uint *param_6);
undefined4 __thiscall FUN_0043f3bd(void *this,uint param_1);
undefined4 FUN_0043f3d6(void);
undefined4 FUN_0043f3f3(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,byte param_5,int param_6,VARIANTARG *param_7);
undefined4 FUN_0043f42e(int *param_1,void *param_2,undefined4 *param_3);
undefined4 FUN_0043f470(byte param_1,int param_2,VARIANTARG *param_3,VARIANTARG *param_4);
LONG FUN_0043f4ad(undefined4 *param_1);
void __fastcall FUN_0043f4d5(int param_1);
void __thiscall FUN_0043f504(void *this,VARIANTARG *param_1);
undefined4 * __fastcall FUN_0043f58f(undefined4 *param_1);
int * __thiscall FUN_0043f5a3(void *this,int *param_1,int *param_2,int param_3,int param_4,int param_5);
void __fastcall FUN_0043f68c(undefined4 *param_1);
void __fastcall FUN_0043f6a5(undefined4 *param_1);
void __fastcall FUN_0043f6be(undefined4 *param_1);
int __thiscall FUN_0043f6ea(void *this,int param_1);
undefined4 * __fastcall FUN_0043f789(undefined4 *param_1);
undefined4 * __thiscall FUN_0043f79e(void *this,byte param_1);
undefined4 * __thiscall FUN_0043f7bd(void *this,byte param_1);
undefined4 * __fastcall FUN_0043f7dc(undefined4 *param_1);
int * __fastcall FUN_0043f7f1(int *param_1);
void FUN_0043f806(int param_1);
uint __thiscall FUN_0043f81a(void *this,int *param_1);
undefined4 FUN_0043fe59(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,undefined4 *param_6);
undefined4 FUN_0043feb9(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
undefined4 FUN_0043fed8(int param_1,uint *param_2);
uint FUN_0043fefc(void *param_1,int param_2);
undefined4 FUN_0043ff6a(int *param_1,void *param_2,undefined4 *param_3);
LONG FUN_0043ffbb(undefined4 *param_1);
void __fastcall FUN_0043ffe3(int param_1);
void FUN_00440005(undefined4 *param_1,uint param_2,undefined4 param_3,VARIANT *param_4);
void __fastcall FUN_00440175(int param_1);
void __fastcall FUN_004401a4(int *param_1);
void __thiscall FUN_004401c9(void *this,int param_1);
int * __thiscall FUN_00440213(void *this,LPCOLESTR param_1,LPCOLESTR param_2,HMODULE param_3);
void __fastcall FUN_0044035c(undefined4 *param_1);
undefined1 * __fastcall FUN_00440388(undefined4 *param_1);
undefined1 * __fastcall FUN_004403a0(undefined4 *param_1);
undefined4 * __fastcall FUN_004403b8(undefined4 *param_1);
void FUN_004403cd(int param_1);
undefined4 FUN_004403e6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
undefined4 __thiscall FUN_00440413(void *this,LPCOLESTR param_1,LPCOLESTR param_2);
undefined4 FUN_0044046c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_00440493(int param_1,undefined4 param_2);
void __thiscall FUN_004404b4(void *this,int *param_1);
undefined4 FUN_004404df(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9);
bool __fastcall FUN_00440515(undefined4 *param_1);
bool __fastcall FUN_00440527(undefined4 *param_1);
void __fastcall FUN_00440539(undefined4 *param_1);
void __fastcall FUN_00440564(undefined4 *param_1);
undefined4 __fastcall FUN_0044058f(int param_1);
undefined4 FUN_00440652(int param_1,undefined4 param_2,undefined4 param_3);
LONG FUN_00440675(undefined4 *param_1);
void __fastcall FUN_0044069d(int param_1);
undefined4 * __thiscall FUN_00440739(void *this,void *param_1,IUnknown *param_2,undefined4 param_3);
void __fastcall FUN_004407e0(undefined4 *param_1);
int * __fastcall FUN_00440851(int param_1);
undefined4 * __fastcall FUN_00440871(undefined4 *param_1);
LONG FUN_00440886(int param_1);
BSTR FUN_004408af(int param_1,short param_2);
BSTR FUN_00440986(int param_1,short param_2);
LPSTR FUN_00440a56(VARIANTARG *param_1);
LPWSTR FUN_00440a7e(VARIANTARG *param_1);
void FUN_00440aa6(LPCWSTR param_1,undefined4 *param_2,short *param_3);
void FUN_00440b5e(short *param_1,int param_2);
undefined4 FUN_00440b9f(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
undefined4 FUN_00440bcc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_00440bf3(int param_1,undefined4 param_2);
HRESULT FUN_00440c14(int param_1,int param_2,undefined4 param_3,undefined4 param_4,byte param_5,int *param_6,VARIANTARG *param_7);
void __fastcall FUN_004412b5(int param_1);
undefined4 FUN_0044136e(int param_1,undefined4 param_2,undefined4 param_3);
int FUN_00441391(undefined4 *param_1);
void __thiscall FUN_004413ca(void *this,LPCWSTR param_1);
LPCLSID FUN_004419b5(short *param_1);
undefined4 * FUN_00441a51(short *param_1);
LPSTR FUN_00441a86(int param_1);
undefined8 * FUN_00441acd(int param_1);
VARIANTARG * FUN_00441b01(VARIANTARG *param_1);
LPWSTR FUN_00441b36(int param_1);
bool FUN_00441b89(VARIANTARG *param_1,VARIANTARG *param_2,ushort param_3);
void FUN_00441c07(VARIANTARG *param_1,VARIANT *param_2,ushort param_3);
void FUN_00441c9a(VARIANTARG *param_1,ushort *param_2,int param_3,int param_4,int param_5,int param_6,int *param_7);
LPCLSID FUN_00441e3e(VARIANTARG *param_1);
short FUN_00441e68(LPCWSTR param_1);
int __thiscall FUN_00441f11(void *this,wchar_t *param_1,int param_2,int param_3,size_t param_4,int param_5,int param_6);
void __thiscall FUN_004420b1(void *this,int param_1,void *param_2);
int __thiscall FUN_004420fb(void *this,int *param_1,void *param_2,char param_3);
undefined4 __fastcall FUN_0044216c(undefined4 *param_1);
bool __thiscall FUN_004421a7(void *this,int *param_1,int *param_2);
int __thiscall FUN_004421e5(void *this,undefined4 *param_1,int *param_2,int param_3,int param_4);
undefined4 FUN_004422f5(void *param_1,uint *param_2,char param_3);
undefined4 * __thiscall FUN_004423d7(void *this,byte param_1);
void * __fastcall FUN_004423f6(void *param_1);
void __thiscall FUN_0044240b(void *this,wchar_t *param_1);
undefined4 __thiscall FUN_00442472(void *this,wchar_t *param_1);
undefined8 * FUN_00442551(int param_1,int *param_2);
void __thiscall FUN_004425b5(void *this,undefined4 *param_1,undefined4 param_2,wchar_t *param_3,wchar_t *param_4);
void FUN_004426bc(int param_1,UINT param_2,uint param_3);
undefined4 FUN_00442875(int param_1);
undefined4 FUN_004428a7(int param_1);
uint FUN_004428d9(int param_1,undefined4 *param_2);
uint FUN_0044290d(int param_1,LPCWSTR param_2);
void __fastcall FUN_00442a8e(int param_1);
undefined4 * __fastcall FUN_00442ab3(undefined4 *param_1);
undefined1 * __thiscall FUN_00442ad1(void *this,undefined1 *param_1);
void __fastcall FUN_00442b03(uint *param_1);
void __fastcall FUN_00442b1c(int param_1);
undefined4 * __thiscall FUN_00442b37(void *this,undefined4 *param_1);
uint FUN_00442cc7(void *param_1,int *param_2);
undefined1 __fastcall FUN_00442d4a(char *param_1);
bool __fastcall FUN_00442e0a(char *param_1);
void __fastcall FUN_00442e13(int param_1);
void __thiscall FUN_00442e5b(void *this,char *param_1);
void __thiscall FUN_00443089(void *this,void *param_1,HWND param_2);
void __thiscall FUN_004431e3(void *this,WCHAR param_1,int param_2);
void __thiscall FUN_0044324d(void *this,void *param_1,HWND param_2);
void __thiscall FUN_004432f9(void *this,void *param_1);
void __thiscall FUN_00443845(void *this,byte param_1,int param_2);
uint __thiscall FUN_004438a3(void *this,byte param_1,byte param_2);
void __thiscall FUN_0044390c(void *this,byte *param_1);
void __thiscall FUN_00443a61(void *this,byte *param_1);
void __thiscall FUN_00443ba6(void *this,byte *param_1);
void __thiscall FUN_00443bc3(void *this,char *param_1);
void __thiscall FUN_00443da8(void *this,char *param_1);
void FUN_00443f9b(uint param_1);
void __thiscall FUN_00444025(void *this,HWND param_1,char param_2);
void __thiscall FUN_0044411c(void *this,byte param_1,byte param_2,DWORD param_3);
uint __thiscall FUN_00444170(void *this,WCHAR param_1);
bool __thiscall FUN_004441de(void *this,byte param_1);
void __cdecl FUN_00444218(wchar_t *param_1,wchar_t *param_2);
LPVOID __thiscall FUN_0044422f(void *this,SIZE_T param_1,HWND param_2);
void __thiscall FUN_00444290(void *this,int param_1);
void __thiscall FUN_004442d6(void *this,LPCVOID param_1,LPVOID param_2,SIZE_T param_3);
void __thiscall FUN_0044430b(void *this,LPCVOID param_1,LPVOID param_2,SIZE_T param_3);
undefined4 * __thiscall FUN_00444340(void *this,undefined4 *param_1);
undefined4 * __fastcall FUN_00444373(undefined4 *param_1);
void __fastcall FUN_004443d3(undefined4 *param_1);
undefined4 * __fastcall FUN_00444407(undefined4 *param_1);
void __thiscall FUN_0044441e(void *this,undefined4 *param_1);
undefined * __thiscall FUN_0044443b(void *this,int param_1);
void __thiscall FUN_0044449e(void *this,longlong *param_1,char param_2,char param_3);
undefined * __thiscall FUN_00444554(void *this,uint param_1,char param_2,char param_3);
undefined4 __thiscall FUN_00444606(void *this,longlong *param_1,ushort param_2,int param_3,void *param_4);
undefined * FUN_00444762(void);
undefined * FUN_004447e0(void);
void __thiscall FUN_0044485e(void *this,int *param_1,int *param_2);
int __thiscall FUN_00444880(void *this,int param_1,int *param_2);
void __thiscall FUN_00444930(void *this,uint param_1);
void __thiscall FUN_004449b0(void *this,int param_1,int *param_2);
void __fastcall FUN_004449f8(int param_1);
void * __fastcall FUN_00444a00(void *param_1);
void __thiscall FUN_00444a18(void *this,int param_1);
void __thiscall FUN_00444a6c(void *this,int param_1);
int __thiscall FUN_00444ac2(void *this,short param_1,LPWSTR param_2,int param_3,UINT param_4,int param_5);
void __thiscall FUN_00444c67(void *this,int param_1);
uint __thiscall FUN_00444cbe(void *this,undefined4 *param_1);
int __fastcall FUN_00444d39(int param_1);
undefined4 __thiscall FUN_00444ddd(void *this,undefined4 param_1,undefined4 param_2,uint param_3,int param_4);
undefined4 __thiscall FUN_00445007(void *this,int param_1);
undefined4 FUN_00445157(UINT param_1,undefined4 *param_2,uint *param_3);
undefined4 FUN_00445262(UINT param_1,undefined4 *param_2);
bool __thiscall FUN_0044530e(void *this,int param_1,int *param_2);
undefined4 FUN_00445347(undefined4 *param_1,wchar_t *param_2,uint param_3);
undefined4 FUN_00445573(int param_1,int *param_2);
void __thiscall FUN_004455bd(void *this,HWND param_1,undefined4 param_2,undefined4 param_3,int param_4);
HICON __thiscall FUN_00445819(void *this,int param_1,wchar_t *param_2,undefined1 *param_3);
bool FUN_004458e6(int param_1,int *param_2);
void __fastcall FUN_00445910(void *param_1);
undefined4 FUN_00445969(uint param_1);
void __fastcall FUN_004459f9(undefined4 *param_1);
uint __thiscall FUN_00445a27(void *this,undefined2 *param_1);
undefined1 __thiscall FUN_00445a70(void *this,undefined4 *param_1,uint *param_2);
uint __thiscall FUN_00445ac4(void *this,undefined4 *param_1);
bool __fastcall FUN_00445b38(undefined4 *param_1);
int __fastcall FUN_00445b46(int param_1);
void __fastcall FUN_00445b6e(undefined4 *param_1);
void __fastcall FUN_00445baf(undefined4 *param_1);
bool __thiscall FUN_00445bc2(void *this,undefined4 *param_1);
bool __thiscall FUN_00445c05(void *this,undefined4 *param_1,uint *param_2);
void __fastcall FUN_00445c4b(undefined4 *param_1);
void FUN_00445c84(undefined4 *param_1,undefined4 *param_2);
void FUN_00445cf1(undefined4 *param_1,undefined4 *param_2);
bool __thiscall FUN_00445d68(void *this,undefined4 *param_1);
void __thiscall FUN_00445dde(void *this,LPCVOID param_1,DWORD param_2);
bool __thiscall FUN_00445e0d(void *this,undefined4 *param_1);
bool __thiscall FUN_00445e2b(void *this,LPCVOID param_1,DWORD param_2);
bool __thiscall FUN_00445e45(void *this,undefined4 *param_1);
bool __thiscall FUN_00445ea3(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_00445ec3(void *this,undefined4 param_1);
void __fastcall FUN_00445eef(void *param_1);
void __fastcall FUN_00445f55(HWND param_1,char param_2);
char __fastcall FUN_00445f85(wchar_t *param_1,wchar_t *param_2,char param_3);
undefined1 __fastcall FUN_004460dd(wchar_t *param_1,wchar_t *param_2,char param_3,char param_4);
bool __fastcall FUN_00446318(wchar_t *param_1);
undefined1 __fastcall FUN_004463f9(wchar_t *param_1);
bool __fastcall FUN_00446514(undefined4 *param_1);
bool __fastcall FUN_00446524(LPCWSTR param_1);
undefined4 __fastcall FUN_00446532(wchar_t *param_1,int *param_2,char *param_3);
uint __fastcall FUN_00446606(LPCWSTR param_1,undefined4 *param_2);
uint __fastcall FUN_00446685(LPCWSTR param_1);
uint __fastcall FUN_00446713(LPCWSTR param_1);
void __fastcall FUN_004467c8(void *param_1);
undefined4 FUN_004467e9(HMODULE param_1,undefined4 param_2,LPCWSTR param_3,undefined4 param_4);
void __fastcall FUN_0044690b(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,wchar_t *param_5);
void __fastcall FUN_00446a7e(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4);
void __cdecl FUN_00446b49(undefined4 param_1,char param_2);
undefined4 __fastcall FUN_00446bd4(LPCWSTR param_1,FILETIME *param_2,int param_3);
void __fastcall FUN_00446c2b(HWND param_1,void *param_2);
undefined4 FUN_00446c58(HWND param_1);
DWORD __fastcall FUN_00446ca9(LPCWSTR param_1);
uint __fastcall FUN_00446ce9(LPCWSTR param_1,wchar_t *param_2,undefined1 (*param_3) [16]);
void __fastcall FUN_00446ebb(wchar_t *param_1,DWORD param_2,wchar_t *param_3);
void __fastcall FUN_00446f02(int param_1,wchar_t *param_2);
bool __thiscall FUN_00446fd6(void *this,LPWSTR param_1);
undefined4 __fastcall FUN_0044701d(wchar_t *param_1);
void __fastcall FUN_00447053(undefined4 param_1,void *param_2);
void __fastcall FUN_00447083(HDC param_1,wchar_t *param_2,LPSIZE param_3);
void __fastcall FUN_0044713b(HWND param_1,undefined1 param_2,void *param_3);
undefined4 FUN_00447173(HWND param_1);
int __fastcall FUN_004471df(int param_1);
bool FUN_004471fa(void);
bool __fastcall FUN_0044725e(wchar_t *param_1,wchar_t *param_2);
undefined4 __fastcall FUN_004472cb(LPCWSTR param_1);
undefined4 __fastcall FUN_004472e1(wint_t param_1);
undefined4 __fastcall FUN_00447308(HWND param_1);
int __fastcall FUN_0044732b(HWND param_1,LPCWSTR param_2,LPCWSTR param_3,UINT param_4,uint param_5);
void __fastcall FUN_004473bd(uint param_1,uint param_2,int param_3,int param_4);
char __fastcall FUN_00447402(wchar_t *param_1);
uint __fastcall FUN_004474bb(wchar_t *param_1);
uint __fastcall FUN_004474e7(wchar_t *param_1);
undefined4 __fastcall FUN_00447513(wchar_t *param_1);
bool __fastcall FUN_00447555(wchar_t *param_1,wchar_t *param_2,char param_3);
bool FUN_00447744(HWND param_1);
undefined4 FUN_0044778f(DWORD *param_1);
undefined4 __fastcall FUN_00447888(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6);
uint __fastcall FUN_0044793d(wchar_t *param_1,char param_2);
BOOL __fastcall FUN_004479d3(uint param_1,DWORD param_2);
void __fastcall FUN_00447a58(uint param_1);
void __fastcall FUN_00447ad9(wchar_t *param_1,char param_2);
void __fastcall FUN_00447b9b(void *param_1);
void __fastcall FUN_00447bf7(HWND param_1);
LPWSTR __fastcall FUN_00447c56(char *param_1,LPWSTR param_2);
void __fastcall FUN_00447cc3(int param_1,undefined2 *param_2,int param_3);
uint __fastcall FUN_00447d3f(int param_1,int param_2,uint *param_3);
uint __fastcall FUN_00447db1(wchar_t *param_1,LPSYSTEMTIME param_2,char param_3,int param_4);
uint __fastcall FUN_00447f2f(wchar_t *param_1,int param_2);
uint __fastcall FUN_00447fa5(wchar_t *param_1,int *param_2);
LPSTR __fastcall FUN_00448035(wchar_t *param_1,LPSTR param_2);
LPWSTR __fastcall FUN_00448096(LPCSTR param_1);
undefined4 FUN_004480e3(int *param_1,int param_2,uint param_3,int param_4);
uint FUN_00448132(undefined4 *param_1);
int __fastcall FUN_0044817f(int param_1);
uint * __thiscall FUN_0044818c(void *this,uint *param_1);
int __fastcall FUN_0044823c(int param_1);
int * __thiscall FUN_00448253(void *this,undefined2 param_1);
undefined4 * __thiscall FUN_004482aa(void *this,undefined4 *param_1);
int * __fastcall FUN_004482de(int param_1);
int FUN_004482fe(int param_1,int param_2,int param_3);
int __thiscall FUN_00448335(void *this,uint param_1,LPWSTR param_2,DWORD param_3);
int FUN_00448488(char param_1,void *param_2,int *param_3,uint *param_4,int *param_5,int *param_6,uint *param_7);
int __thiscall FUN_0044892b(void *this,longlong *param_1,int *param_2,undefined4 *param_3);
void __fastcall FUN_004489b6(undefined4 *param_1);
void __thiscall FUN_004489f7(void *this,longlong *param_1,double *param_2,int param_3);
undefined4 __thiscall FUN_00448a13(void *this,longlong *param_1,double *param_2,double *param_3,uint param_4,int param_5);
undefined4 FUN_00448c6c(longlong *param_1,byte param_2,undefined8 *param_3,int param_4,int param_5,int param_6,uint param_7,void *param_8);
int * __thiscall FUN_00448eb9(void *this,int *param_1,int param_2,double *param_3);
undefined4 * __thiscall FUN_004490a3(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_004490d3(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int *param_6);
undefined4 * __thiscall FUN_0044910d(void *this,undefined4 *param_1);
uint * __thiscall FUN_00449192(void *this,uint param_1);
undefined4 * __thiscall FUN_004491d7(void *this,HANDLE param_1);
void __fastcall FUN_0044922c(int param_1);
void __fastcall FUN_0044925a(undefined4 *param_1);
undefined4 * __thiscall FUN_00449295(void *this,byte param_1);
undefined4 * __thiscall FUN_004492b5(void *this,byte param_1);
undefined4 * __fastcall FUN_004492d4(HANDLE param_1);
undefined4 __thiscall FUN_004492f1(void *this,int *param_1,char param_2);
undefined4 __fastcall FUN_0044933e(int param_1);
undefined4 __thiscall FUN_00449376(void *this,int *param_1);
void __fastcall FUN_004493d1(int *param_1);
void __fastcall FUN_004493e6(int param_1);
void __fastcall FUN_0044940c(int param_1);
void __fastcall FUN_00449428(HANDLE param_1,LPHANDLE param_2,BOOL param_3);
bool __fastcall FUN_00449456(byte *param_1);
uint __fastcall FUN_00449462(byte *param_1);
HANDLE __thiscall FUN_00449503(void *this,LPHANDLE param_1,LPHANDLE param_2,int *param_3,int *param_4);
HANDLE __thiscall FUN_00449568(void *this,uint param_1,DWORD param_2,PHANDLE param_3,PHANDLE param_4);
HANDLE __thiscall FUN_00449634(void *this,undefined4 param_1,undefined4 param_2,PHANDLE param_3,PHANDLE param_4);
undefined4 __thiscall FUN_004496fd(void *this,int *param_1,char param_2);
undefined4 __thiscall FUN_00449744(void *this,int *param_1);
void __fastcall FUN_00449776(void *param_1);
byte __fastcall FUN_004497a5(byte *param_1);
undefined4 __fastcall FUN_004497af(byte *param_1);
DWORD __thiscall FUN_004497bd(void *this,LPCVOID param_1,DWORD param_2);
void __fastcall FUN_00449805(void *param_1);
undefined4 __fastcall FUN_00449815(byte *param_1);
undefined4 __thiscall FUN_00449823(void *this,int *param_1,char param_2);
undefined4 __thiscall FUN_0044985a(void *this,int *param_1);
void __fastcall FUN_0044987d(void *param_1);
undefined4 __fastcall FUN_004498ac(byte *param_1);
undefined4 __fastcall FUN_004498ba(int param_1);
undefined4 FUN_004499df(int param_1);
void __fastcall FUN_004499f9(LPVOID param_1);
void __fastcall FUN_00449a20(int param_1);
void __fastcall FUN_00449a82(byte *param_1);
void __fastcall FUN_00449ad5(int param_1);
int * __thiscall FUN_00449af1(void *this,int *param_1);
int * __thiscall FUN_00449b72(void *this,int *param_1);
undefined4 * __thiscall FUN_00449c12(void *this,wchar_t *param_1);
undefined4 __fastcall FUN_00449c50(int param_1);
int __fastcall FUN_00449c7f(int param_1);
int __fastcall FUN_00449c95(int param_1);
int __fastcall FUN_00449cab(int param_1);
void __thiscall FUN_00449cc0(void *this,int *param_1,undefined4 param_2,uint param_3);
undefined4 * __thiscall FUN_00449d2d(void *this,int param_1);
int * __thiscall FUN_00449d58(void *this,undefined4 *param_1);
int * __thiscall FUN_00449d8d(void *this,undefined4 *param_1);
int * __thiscall FUN_00449dc5(void *this,VARIANTARG *param_1);
int * __thiscall FUN_00449e3c(void *this,undefined4 *param_1);
bool __fastcall FUN_00449e71(double *param_1);
uint __fastcall FUN_00449e80(ushort *param_1,ushort *param_2);
bool __fastcall FUN_00449f2f(double *param_1,double *param_2);
double * __thiscall FUN_00449f44(void *this,double *param_1);
double * __thiscall FUN_0044a024(void *this,double *param_1);
double * __thiscall FUN_0044a126(void *this,double *param_1);
void * __fastcall FUN_0044a16b(void *param_1);
undefined4 __thiscall FUN_0044a183(void *this,undefined4 *param_1);
uint __fastcall FUN_0044a1ae(uint *param_1);
uint __thiscall FUN_0044a1eb(void *this,uint *param_1);
int __fastcall FUN_0044a2d6(uint *param_1);
void __fastcall FUN_0044a324(int *param_1);
undefined4 __thiscall FUN_0044a3e3(void *this,int param_1);
undefined4 * __thiscall FUN_0044a448(void *this,int *param_1,uint param_2,LPWSTR param_3,DWORD param_4,undefined4 param_5,int *param_6);
undefined4 __fastcall FUN_0044a4d5(int *param_1);
void __fastcall FUN_0044a635(double *param_1,uint param_2,double *param_3);
undefined4 __fastcall FUN_0044a68e(int *param_1);
undefined4 * __thiscall FUN_0044a69d(void *this,undefined4 *param_1);
void __fastcall FUN_0044a6d9(int param_1);
void __thiscall FUN_0044a6ef(void *this,undefined4 param_1);
uint __thiscall FUN_0044a729(void *this,ushort *param_1);
undefined4 __thiscall FUN_0044aaf8(void *this,VARIANTARG *param_1);
uint __thiscall FUN_0044b058(void *this,longlong *param_1);
void __fastcall FUN_0044b147(int *param_1);
void __thiscall FUN_0044b171(void *this,int *param_1);
double * __thiscall FUN_0044b1af(void *this,double *param_1);
uint __fastcall FUN_0044b47e(double *param_1);
uint __fastcall FUN_0044b528(undefined4 *param_1);
undefined4 __fastcall FUN_0044b54d(undefined4 *param_1);
undefined4 __fastcall FUN_0044b55b(int *param_1);
double __fastcall FUN_0044b577(double *param_1,uint param_2);
int __fastcall FUN_0044b59e(int *param_1);
uint FUN_0044b5e8(void);
float10 FUN_0044b62d(void);
void __fastcall FUN_0044b690(undefined4 param_1);
void FUN_0044b6cc(void);
void __thiscall FUN_0044b791(void *this,int param_1,int param_2);
undefined4 __fastcall FUN_0044b7e5(int param_1);
uint __thiscall FUN_0044b841(void *this,int param_1);
int __fastcall FUN_0044b8dd(void *param_1);
void __thiscall FUN_0044b942(void *this,uint *param_1,int *param_2);
int __fastcall FUN_0044b965(int *param_1);
undefined4 __fastcall FUN_0044ba8a(int *param_1);
void __fastcall FUN_0044bb64(int param_1);
void __fastcall FUN_0044bb9c(int param_1);
bool __thiscall FUN_0044bbe8(void *this,undefined4 *param_1);
void __fastcall FUN_0044bc67(int *param_1);
undefined4 __fastcall FUN_0044bcf4(int param_1);
void __thiscall FUN_0044bd3d(void *this,undefined1 param_1);
void __fastcall FUN_0044bd8a(int param_1);
void * __fastcall FUN_0044bdb4(void *param_1);
void __thiscall FUN_0044bdf8(void *this,ushort param_1);
float10 __fastcall FUN_0044be5e(int *param_1);
int __fastcall FUN_0044bf2e(int *param_1);
void FUN_0044bf5a(int param_1,uint param_2,ushort param_3);
undefined4 __thiscall FUN_0044bfa4(void *this,wchar_t *param_1,wchar_t *param_2);
undefined4 __thiscall FUN_0044c396(void *this,wchar_t *param_1,undefined4 *param_2,size_t *param_3);
undefined4 __thiscall FUN_0044c56d(void *this,wchar_t *param_1,void *param_2);
void FUN_0044c6d9(LPCWSTR param_1,FILETIME *param_2,FILETIME *param_3);
void FUN_0044c71a(LPWSTR param_1);
void __fastcall FUN_0044c750(undefined4 *param_1);
void __thiscall FUN_0044c81d(void *this,wchar_t *param_1);
void __thiscall FUN_0044c845(void *this,wchar_t *param_1);
undefined4 * __thiscall FUN_0044c870(void *this,int param_1);
undefined4 * __thiscall FUN_0044c8fe(void *this,undefined4 *param_1);
void * __thiscall FUN_0044c942(void *this,int *param_1);
void __thiscall FUN_0044c97e(void *this,int *param_1);
void __thiscall FUN_0044c997(void *this,int *param_1);
void * __fastcall FUN_0044c9b8(void *param_1);
void * __thiscall FUN_0044c9d8(void *this,byte param_1);
void * __fastcall FUN_0044c9fd(void *param_1);
undefined4 * __fastcall FUN_0044ca12(undefined4 *param_1);
undefined4 * __fastcall FUN_0044ca2e(undefined4 *param_1);
void __thiscall FUN_0044ca48(void *this,undefined4 param_1,wchar_t *param_2);
void __thiscall FUN_0044cc5c(void *this,UINT param_1,uint param_2);
void * FUN_0044ce7a(void *param_1,DWORD param_2);
uint __thiscall FUN_0044ced6(void *this,int param_1,undefined4 *param_2);
void __thiscall FUN_0044cf1c(void *this,wchar_t *param_1);
void __thiscall FUN_0044cf4c(void *this,undefined4 param_1,undefined1 param_2);
void __thiscall FUN_0044cf72(void *this,int param_1,char param_2);
void FUN_0044cfd1(void);
void __thiscall FUN_0044cff9(void *this,undefined4 *param_1);
void __thiscall FUN_0044d051(void *this,undefined4 *param_1);
undefined4 FUN_0044d091(HWND param_1,int param_2,undefined4 param_3,int param_4);
DWORD FUN_0044d0b8(LPCWSTR param_1,LPCWSTR param_2,char param_3);
undefined4 FUN_0044d219(int param_1,int *param_2);
undefined4 __fastcall FUN_0044d3df(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 FUN_0044d455(int param_1,int *param_2);
undefined4 __thiscall FUN_0044d491(void *this,int param_1,uint *param_2);
undefined4 __fastcall FUN_0044d69b(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_0044d711(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __thiscall FUN_0044d76a(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_0044d994(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_0044da45(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_0044daf6(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_0044de7c(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_0044e08b(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_0044e0eb(void *this,int param_1,void *param_2);
undefined4 FUN_0044e16c(int param_1,int *param_2);
undefined4 __thiscall FUN_0044e1fd(void *this,int param_1,double *param_2);
undefined4 __thiscall FUN_0044e2c3(void *this,int param_1,double *param_2);
undefined4 __thiscall FUN_0044e389(void *this,DWORD param_1,void *param_2);
undefined4 FUN_0044e492(int param_1,int *param_2);
undefined4 __fastcall FUN_0044e4cf(int param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_0044e567(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_0044e698(undefined4 param_1,uint param_2,int param_3,DWORD *param_4);
undefined4 FUN_0044e7dd(uint param_1,int *param_2);
undefined4 __thiscall FUN_0044eacf(void *this,int param_1,int *param_2);
undefined4 FUN_0044eb24(int param_1,int *param_2);
undefined4 __thiscall FUN_0044eb60(void *this,int param_1,int *param_2);
undefined4 __fastcall FUN_0044ecda(int *param_1,uint param_2,int param_3,void *param_4);
undefined4 __fastcall FUN_0044edca(int param_1,uint param_2,uint param_3,void *param_4);
undefined4 __thiscall FUN_0044ee18(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_0044ef46(void *this,int param_1,int *param_2);
undefined4 __fastcall FUN_0044f051(int *param_1,uint param_2,int param_3,void *param_4);
undefined4 __fastcall FUN_0044f10c(int *param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_0044f184(int *param_1,uint param_2,int param_3,void *param_4);
undefined4 __thiscall FUN_0044f23d(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_0044f56f(void *this,int param_1,DWORD *param_2);
undefined4 FUN_0044f5fa(int param_1,int *param_2);
undefined4 FUN_0044f967(int param_1,void *param_2);
undefined4 __fastcall FUN_0044fa0c(int *param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_0044fd1d(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_0044fe7e(int *param_1,uint param_2,int param_3,int *param_4);
void __thiscall FUN_00450060(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_00450078(void *this,int param_1,int *param_2);
undefined4 FUN_004501f4(int param_1,int *param_2);
undefined4 FUN_0045028d(int param_1,int *param_2);
void __thiscall FUN_004502d6(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_004502ee(void *this,IShellFolder *param_1,void *param_2);
undefined4 FUN_004505f8(int param_1,int *param_2);
undefined4 __fastcall FUN_004508a6(int param_1,uint param_2,uint param_3,void *param_4);
undefined4 FUN_0045091d(int param_1,int *param_2);
void __thiscall FUN_00450b60(void *this,int param_1,int *param_2);
void __thiscall FUN_00450b74(void *this,int param_1,int *param_2);
undefined4 FUN_00450b88(int param_1,int *param_2);
undefined4 FUN_00450c75(int param_1,void *param_2);
undefined4 __thiscall FUN_00450d24(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00451023(void *this,int param_1,int *param_2);
undefined4 FUN_00451206(int param_1,int *param_2);
undefined4 FUN_00451373(int param_1,int *param_2);
undefined4 __thiscall FUN_00451419(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_004516da(void *this,int param_1,void *param_2,uint param_3,char param_4);
undefined1 FUN_00451b2f(LPCWSTR param_1,uint param_2,uint param_3,undefined4 param_4);
undefined1 FUN_00451c8a(LPCWSTR param_1,FILETIME *param_2,int param_3,undefined4 param_4);
undefined4 __thiscall FUN_00451dd0(void *this,int param_1,int *param_2,char param_3);
char FUN_00451f94(wchar_t *param_1,uint *param_2,uint *param_3,uint *param_4,undefined4 param_5,undefined4 param_6);
uint __fastcall FUN_00452113(int param_1,uint param_2,int *param_3,int *param_4,int param_5);
int __thiscall FUN_00452169(void *this,short *param_1);
void FUN_004521bb(int param_1,int *param_2);
void FUN_004521cf(int param_1,int *param_2);
void FUN_004521e3(int param_1,int *param_2);
void FUN_004521f7(int param_1,int *param_2);
void FUN_0045220b(int param_1,int *param_2);
void FUN_0045221f(int param_1,int *param_2);
void FUN_00452233(int param_1,int *param_2);
void FUN_00452247(int param_1,int *param_2);
void FUN_0045225b(int param_1,int *param_2);
void FUN_0045226f(int param_1,int *param_2);
void FUN_00452283(int param_1,int *param_2);
void FUN_00452297(int param_1,int *param_2);
void FUN_004522ab(int param_1,int *param_2);
void FUN_004522bf(int param_1,int *param_2);
void FUN_004522d3(int param_1,int *param_2);
void FUN_004522e7(int param_1,int *param_2);
void FUN_004522fb(int param_1,int *param_2);
void FUN_0045230f(int param_1,int *param_2);
void FUN_00452323(int param_1,int *param_2);
void FUN_00452337(int param_1,int *param_2);
void FUN_0045234b(int param_1,int *param_2);
void FUN_0045235f(int param_1,int *param_2);
void FUN_00452373(int param_1,int *param_2);
void FUN_00452387(int param_1,int *param_2);
void FUN_0045239b(int param_1,int *param_2);
void FUN_004523af(int param_1,int *param_2);
void FUN_004523c3(int param_1,int *param_2);
void FUN_004523d7(int param_1,int *param_2);
undefined4 __fastcall FUN_004523eb(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_00452438(undefined4 param_1,uint param_2,int param_3,uint *param_4);
undefined4 __fastcall FUN_0045246d(uint param_1,uint param_2,int param_3,uint *param_4);
undefined4 __fastcall FUN_004524f3(int *param_1,uint param_2,undefined4 *param_3,int *param_4);
undefined4 __thiscall FUN_00452670(void *this,int param_1,int *param_2);
undefined4 __fastcall FUN_004527ab(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 FUN_004528e8(int param_1,uint *param_2);
undefined4 __fastcall FUN_00452958(int *param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_004529b4(int *param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_00452a10(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 FUN_00452a50(int param_1,int *param_2);
undefined4 __fastcall FUN_00452ad4(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_00452b29(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 FUN_00452b7e(int param_1,int *param_2);
undefined4 __fastcall FUN_00452c6e(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_00452d1a(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 FUN_00452d6e(int param_1,int *param_2);
undefined4 __fastcall FUN_00452e79(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_00452f03(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_00452f4d(undefined4 param_1,uint param_2,int param_3,uint *param_4);
undefined4 __fastcall FUN_00452f8d(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 FUN_00452fe2(int param_1,int *param_2);
undefined4 __fastcall FUN_004530cd(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __thiscall FUN_00453109(void *this,int *param_1,int *param_2);
undefined4 __thiscall FUN_0045323d(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_004533a1(void *this,int *param_1,int *param_2);
undefined4 FUN_00453457(int param_1,int *param_2);
undefined4 __fastcall FUN_00453566(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_0045370a(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_00453793(undefined4 param_1,uint param_2,int param_3);
undefined4 FUN_004537f7(HWND param_1,int *param_2);
undefined4 __fastcall FUN_0045390c(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_00453966(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_004539d8(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_00453a3c(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_00453a87(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 FUN_00453ad3(int param_1,int param_2,int param_3);
undefined4 FUN_00453c65(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6);
undefined4 * __thiscall FUN_00453e1f(void *this,int param_1);
undefined4 * __thiscall FUN_00453ea8(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_00453f70(void *this,wchar_t *param_1,wchar_t *param_2,uint param_3,undefined1 param_4);
undefined4 * __fastcall FUN_0045403d(undefined4 *param_1);
void * __thiscall FUN_00454051(void *this,undefined2 *param_1);
undefined4 * __thiscall FUN_0045408f(void *this,undefined4 *param_1);
undefined2 * __thiscall FUN_004540c3(void *this,undefined2 *param_1);
undefined4 * __fastcall FUN_00454123(undefined4 *param_1);
void __fastcall FUN_0045415f(undefined4 *param_1);
void __fastcall FUN_00454178(undefined4 *param_1);
void __fastcall FUN_004541ad(undefined4 *param_1);
void __fastcall FUN_004541e8(int param_1);
undefined4 * __thiscall FUN_00454205(void *this,byte param_1);
undefined4 * __fastcall FUN_00454224(undefined4 *param_1);
void * __thiscall FUN_00454239(void *this,byte param_1);
undefined4 * __fastcall FUN_0045425e(undefined4 *param_1);
void * __fastcall FUN_0045427a(uint param_1);
void __thiscall FUN_00454289(void *this,void *param_1);
bool __fastcall FUN_004542ef(int *param_1);
uint __thiscall FUN_0045431c(void *this,int param_1,int param_2,undefined4 param_3);
undefined1 __thiscall FUN_004543e2(void *this,int param_1,char param_2);
undefined4 __thiscall FUN_004544ad(void *this,uint param_1);
undefined1 __thiscall FUN_004544c1(void *this,undefined4 param_1);
undefined4 FUN_00454585(undefined4 param_1);
uint __thiscall FUN_004545c4(void *this,int param_1,uint param_2,char param_3);
undefined4 __thiscall FUN_00454715(void *this,uint param_1);
undefined4 __thiscall FUN_00454729(void *this,int param_1,void *param_2);
undefined4 __fastcall FUN_0045478d(int param_1,uint param_2,int *param_3,void *param_4);
undefined4 __fastcall FUN_0045480c(int *param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_00454947(int *param_1,uint param_2,int *param_3,int *param_4);
undefined4 __fastcall FUN_00454bde(int *param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_00454ca6(int *param_1,uint param_2,int param_3,void *param_4);
undefined4 __thiscall FUN_00454d9f(void *this,int param_1);
undefined1 __fastcall FUN_00454e2d(int param_1);
bool FUN_00454e4e(short *param_1);
void __thiscall FUN_00454eb5(void *this,undefined4 param_1);
uint __thiscall FUN_00454eca(void *this,undefined4 param_1);
void __thiscall FUN_00454f83(void *this,undefined4 param_1);
bool __fastcall FUN_0045503b(int *param_1);
undefined4 __thiscall FUN_00455052(void *this,undefined4 param_1,int param_2,undefined1 param_3);
void __thiscall FUN_00455083(void *this,int *param_1);
void __thiscall FUN_004550ac(void *this,undefined4 param_1,int param_2);
void __fastcall FUN_004550fe(undefined2 *param_1,uint param_2);
undefined4 FUN_00455180(wchar_t *param_1,void *param_2);
undefined1 __thiscall FUN_0045528c(void *this,undefined4 param_1);
void __fastcall FUN_004552d6(undefined4 *param_1);
uint __thiscall FUN_00455303(void *this,int param_1,int param_2);
void __cdecl FUN_0045535a(void *param_1);
bool __thiscall FUN_00455369(void *this,DWORD param_1);
void __fastcall FUN_00455389(int param_1);
void __fastcall FUN_004553b8(undefined4 *param_1);
void __thiscall FUN_004553e3(void *this,undefined4 *param_1);
void __thiscall FUN_0045543b(void *this,undefined4 *param_1);
void __thiscall FUN_004554c7(void *this,undefined4 *param_1);
undefined4 FUN_00455507(int param_1,double *param_2);
undefined4 FUN_00455547(int param_1,double *param_2);
undefined4 FUN_00455587(uint param_1,uint *param_2);
undefined4 FUN_004555e1(int param_1,uint *param_2);
undefined4 FUN_00455618(int param_1,int *param_2);
undefined4 __fastcall FUN_00455639(undefined4 param_1,uint param_2,int param_3,uint *param_4);
undefined4 __fastcall FUN_0045568b(undefined4 param_1,uint param_2,int param_3,uint *param_4);
undefined4 __fastcall FUN_004556bc(undefined4 param_1,uint param_2,int param_3,uint *param_4);
undefined4 __thiscall FUN_0045570e(void *this,uint param_1,uint *param_2);
undefined4 __fastcall FUN_0045589d(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_00455903(undefined4 param_1,uint param_2,int param_3,uint *param_4);
undefined4 FUN_00455955(int param_1,double *param_2);
undefined4 __fastcall FUN_004559ba(int *param_1,uint param_2,uint param_3,void *param_4);
undefined4 __fastcall FUN_00455a6c(int *param_1,uint param_2,uint param_3,void *param_4);
undefined4 FUN_00455aee(int param_1,double *param_2);
undefined4 FUN_00455bf2(int param_1,int *param_2);
undefined4 FUN_00455c32(int param_1,double *param_2);
undefined4 __fastcall FUN_00455c97(int *param_1,uint param_2,int param_3,int *param_4);
undefined4 FUN_00455d03(int param_1,int *param_2);
undefined4 FUN_00455d35(int param_1,int *param_2);
undefined4 FUN_00455d67(int param_1,int *param_2);
undefined4 FUN_00455de8(int param_1,int *param_2);
undefined4 FUN_00455e36(int param_1,int *param_2);
undefined4 FUN_00455ebd(int param_1,int *param_2);
undefined4 FUN_00455eed(int param_1,int *param_2);
undefined4 FUN_00455f1f(int param_1,int *param_2);
undefined4 FUN_00455f51(int param_1,int *param_2);
undefined4 FUN_00455f83(int param_1,double *param_2);
undefined4 FUN_00455fc3(int param_1,int *param_2);
undefined4 __fastcall FUN_004560d3(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_00456102(int *param_1,uint param_2,int param_3,double *param_4);
undefined4 __fastcall FUN_00456290(undefined4 param_1,uint param_2,int param_3);
undefined4 FUN_004562ad(int param_1,int *param_2);
undefined4 FUN_004562ed(int param_1,void *param_2);
undefined4 FUN_00456312(int param_1,int *param_2);
uint * FUN_00456352(uint *param_1,uint param_2,uint param_3,int param_4);
undefined1 * __thiscall FUN_004563e5(void *this,uint param_1,int param_2);
void __fastcall FUN_00456447(int param_1);
undefined1 __thiscall FUN_00456463(void *this,int *param_1,int param_2,int *param_3,uint param_4,undefined4 param_5,undefined1 *param_6);
void FUN_00456544(int param_1,LPPOINT param_2,HWND param_3);
uint __thiscall FUN_0045658b(void *this,int *param_1,int param_2,void *param_3,uint param_4);
undefined4 __thiscall FUN_0045668f(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_0045681c(void *this,int param_1,int *param_2);
undefined4 FUN_004569f0(undefined4 param_1,void *param_2);
undefined4 FUN_00456a36(int param_1);
undefined4 __fastcall FUN_00456a61(undefined4 param_1,uint param_2,DWORD param_3);
undefined4 __fastcall FUN_00456aaf(undefined4 param_1,uint param_2,int param_3,int *param_4);
ulonglong __fastcall FUN_00456aed(undefined4 param_1,uint param_2,int param_3);
undefined4 __thiscall FUN_00456b0c(void *this,undefined4 param_1,void *param_2);
undefined4 __thiscall FUN_00456d07(void *this,int param_1,int *param_2);
undefined4 FUN_00456df7(int param_1,size_t *param_2);
undefined4 FUN_00456e32(int param_1,void *param_2);
undefined4 FUN_00456e91(int param_1,int *param_2);
undefined4 __thiscall FUN_00456ef5(void *this,undefined4 param_1,int *param_2);
undefined4 __thiscall FUN_00456f4b(void *this,int *param_1,void *param_2);
undefined4 __thiscall FUN_00456ff0(void *this,int param_1,double *******param_2);
undefined4 __thiscall FUN_004570a1(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_0045712e(void *this,int param_1,int *param_2);
undefined4 FUN_00457506(undefined4 param_1,int *param_2);
undefined4 FUN_0045752e(int param_1,int *param_2);
undefined4 FUN_00457560(int param_1,uint *param_2);
undefined4 FUN_004575d5(int param_1,int *param_2);
undefined4 FUN_00457637(int param_1,int *param_2);
undefined4 __thiscall FUN_00457699(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_0045784e(void *this,int param_1,int *param_2);
undefined4 FUN_00457974(int param_1,int *param_2);
undefined4 FUN_004579b0(undefined4 param_1,int *param_2);
undefined4 __thiscall FUN_00457ad8(void *this,int param_1,int *param_2);
undefined4 __fastcall FUN_00457be4(void *param_1,uint param_2,int param_3);
undefined4 FUN_00457c2a(int param_1,int *param_2);
undefined4 __fastcall FUN_00457c66(int param_1,uint param_2,int param_3,int *param_4);
undefined4 FUN_00457ce5(LPCWSTR param_1,int *param_2);
undefined4 __thiscall FUN_00457e6f(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00457fc3(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00458107(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_004582eb(void *this,uint param_1,double *param_2);
undefined4 __fastcall FUN_00458420(int param_1,uint param_2,int param_3,uint *param_4);
undefined4 __fastcall FUN_004584ea(int *param_1,uint param_2,int param_3,int *param_4);
void FUN_0045877a(int param_1);
void FUN_0045878f(int param_1);
undefined4 __fastcall FUN_004587a4(undefined4 param_1,uint param_2,int param_3);
undefined4 __fastcall FUN_0045886b(int param_1,uint param_2,int param_3);
undefined4 __fastcall FUN_004588ce(int *param_1,uint param_2,int param_3,void *param_4);
undefined4 __fastcall FUN_0045892d(int *param_1,uint param_2,int param_3,void *param_4);
undefined4 __fastcall FUN_0045896c(undefined4 param_1,uint param_2,int param_3);
undefined4 __fastcall FUN_004589be(int *param_1,uint param_2,int param_3,int *param_4);
void FUN_00458a21(IStream *param_1);
void FUN_00458a36(IStream *param_1);
undefined4 FUN_00458a4b(IStream *param_1,int *param_2);
undefined4 __fastcall FUN_00458a7f(int *param_1,uint param_2,int param_3,SOCKET *param_4);
undefined4 __fastcall FUN_00458b46(int *param_1,uint param_2,int param_3,void *param_4);
undefined4 __thiscall FUN_00458b95(void *this,int param_1,SOCKET *param_2);
undefined4 __fastcall FUN_00458c4f(int *param_1,uint param_2,int param_3,SOCKET *param_4);
undefined4 __thiscall FUN_00458d33(void *this,int param_1,void *param_2);
undefined4 __fastcall FUN_00458de2(int *param_1,uint param_2,int param_3,void *param_4);
undefined4 __fastcall FUN_00458f73(int *param_1,uint param_2,int param_3,int *param_4);
undefined4 __thiscall FUN_00458fea(void *this,undefined4 param_1,void *param_2);
undefined4 __thiscall FUN_00459022(void *this,undefined4 param_1,void *param_2);
undefined4 FUN_00459070(int param_1);
undefined4 __thiscall FUN_00459155(void *this,int param_1,int *param_2);
undefined4 FUN_0045923b(int param_1,int *param_2);
undefined4 __thiscall FUN_004593c3(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_0045947c(void *this,int param_1,int *param_2);
undefined4 __fastcall FUN_004595bf(int *param_1,uint param_2,int param_3,int *param_4);
undefined4 __thiscall FUN_00459897(void *this,int param_1,int *param_2);
undefined4 FUN_004599df(int param_1,void *param_2);
undefined4 FUN_00459ab3(byte param_1,byte *param_2,byte *param_3);
undefined4 __thiscall FUN_00459ad2(void *this,byte *param_1);
void __thiscall FUN_00459b17(void *this,byte param_1);
void __thiscall FUN_00459b2e(void *this,byte param_1);
void __thiscall FUN_00459b45(void *this,int param_1,int param_2,int param_3,char param_4);
float10 FUN_00459c54(byte *param_1,int param_2,int param_3,int param_4);
float10 FUN_00459d26(byte *param_1,int param_2,int param_3,int param_4);
void * __thiscall FUN_00459dc1(void *this,HWND param_1,int *param_2,uint *param_3);
undefined4 FUN_00459f50(int param_1,uint param_2,int param_3);
void FUN_0045a279(byte param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
undefined4 FUN_0045a2a9(IStream *param_1,HANDLE param_2,int *param_3);
uint __thiscall FUN_0045a82c(void *this,undefined2 *param_1,undefined4 *param_2,int param_3);
void FUN_0045a8b2(undefined4 *param_1,undefined4 *param_2);
void __thiscall FUN_0045a923(void *this,char *param_1);
undefined4 * __thiscall FUN_0045a994(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_0045a9b3(void *this,undefined4 *param_1);
void FUN_0045a9d2(undefined4 *param_1,undefined4 *param_2);
undefined1 * __fastcall FUN_0045aa37(undefined4 *param_1);
undefined4 FUN_0045aa54(int param_1,int *param_2);
undefined4 __thiscall FUN_0045aa84(void *this,int param_1,int *param_2);
int __thiscall FUN_0045adae(void *this,int param_1,void *param_2);
int __thiscall FUN_0045afe0(void *this,int param_1,void *param_2);
int FUN_0045b2a9(int param_1,void *param_2);
undefined4 __thiscall FUN_0045b644(void *this,HMODULE param_1,void *param_2);
bool __fastcall FUN_0045bacb(undefined4 *param_1);
void __fastcall FUN_0045badd(undefined4 *param_1);
int __thiscall FUN_0045bb08(void *this,int param_1,int *param_2,void *param_3);
int __thiscall FUN_0045bdbd(void *this,DWORD param_1,ushort *param_2,wchar_t *param_3,int *param_4);
int __thiscall FUN_0045c18c(void *this,LPCOLESTR param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,int *param_5);
int __thiscall FUN_0045c43f(void *this,int *param_1,double *param_2,int *param_3,wchar_t *param_4,int param_5);
int __thiscall FUN_0045c89a(void *this,int param_1,int *param_2,wchar_t *param_3,int param_4,double *param_5);
int __thiscall FUN_0045c8de(void *this,int *param_1,wchar_t *param_2,int param_3);
undefined4 __thiscall FUN_0045c93d(void *this,int param_1,int *param_2,void *param_3);
undefined4 __fastcall FUN_0045cb80(void *param_1);
undefined4 * __thiscall FUN_0045cbb1(void *this,undefined4 *param_1,uint param_2);
void __fastcall FUN_0045cbe0(int *param_1);
void __thiscall FUN_0045cc29(void *this,undefined4 *param_1);
void __thiscall FUN_0045ccb2(void *this,int *param_1,undefined1 param_2);
undefined4 * __thiscall FUN_0045ccdc(void *this,int param_1);
undefined4 * __thiscall FUN_0045cd62(void *this,undefined4 *param_1);
undefined4 FUN_0045cda2(void *param_1,undefined4 *param_2);
void __thiscall FUN_0045ceca(void *this,HWND param_1,HWND param_2,int param_3);
void __thiscall FUN_0045d451(void *this,int param_1,int *param_2,int *param_3);
void FUN_0045d552(HWND param_1,HWND param_2,int param_3);
void __thiscall FUN_0045d78d(void *this,HWND param_1,int *param_2);
void __thiscall FUN_0045d87e(void *this,undefined4 param_1,int *param_2);
void __thiscall FUN_0045da0e(void *this,HWND param_1,HWND param_2,int param_3);
void __thiscall FUN_0045e0dd(void *this,HWND param_1,int *param_2);
void __thiscall FUN_0045e37c(void *this,HWND param_1,HWND param_2);
int __thiscall FUN_0045e40a(void *this,int param_1,HWND param_2,undefined4 *param_3);
undefined4 __thiscall FUN_0045e822(void *this,int param_1,uint *param_2,int *param_3);
void __thiscall FUN_0045eb57(void *this,int *param_1);
int __fastcall FUN_0045eba6(int param_1);
undefined1 * __fastcall FUN_0045ebb3(undefined4 *param_1);
void * __thiscall FUN_0045ebcb(void *this,void *param_1,wchar_t *param_2);
int __fastcall FUN_0045ec26(void *param_1);
int * __thiscall FUN_0045ec43(void *this,int *param_1);
__time64_t * __fastcall FUN_0045ec83(__time64_t *param_1);
undefined4 * __fastcall FUN_0045ec97(undefined4 *param_1);
bool __fastcall FUN_0045ecb6(undefined4 *param_1);
void __fastcall FUN_0045ecc8(undefined4 *param_1);
void FUN_0045ecf3(int param_1,int *param_2,undefined1 *param_3);
int FUN_0045ed8d(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5);
undefined4 __thiscall FUN_0045eef8(void *this,int param_1,uint *param_2,int *param_3);
void FUN_0045ef61(longlong *param_1);
void FUN_0045f0ac(longlong *param_1);
undefined4 __thiscall FUN_0045f320(void *this,uint param_1,int *param_2,int *param_3,char param_4);
undefined4 __thiscall FUN_0045f45e(void *this,int param_1,int *param_2,int *param_3,void *param_4);
undefined4 __thiscall FUN_0045f5ee(void *this,int param_1,int *param_2,int *param_3,char param_4,char param_5);
void __thiscall FUN_0045f6cb(void *this,undefined8 *param_1);
undefined4 * __thiscall FUN_0045f70a(void *this,int param_1);
undefined4 * __thiscall FUN_0045f78d(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_0045f7be(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_0045f7e8(void *this,undefined4 param_1,undefined4 *param_2);
undefined4 * __fastcall FUN_0045f812(undefined4 *param_1);
void __fastcall FUN_0045f826(undefined4 *param_1);
void __fastcall FUN_0045f83f(undefined4 *param_1);
undefined1 * __fastcall FUN_0045f858(undefined4 *param_1);
undefined4 * __thiscall FUN_0045f870(void *this,byte param_1);
undefined4 * __thiscall FUN_0045f88f(void *this,byte param_1);
undefined4 __thiscall FUN_0045f8ae(void *this,int param_1,int *param_2,char param_3);
undefined1 FUN_0045fda5(int *param_1,undefined4 *param_2);
void FUN_0046040f(double *param_1,double *param_2);
undefined1 FUN_00460567(int *param_1,int param_2);
HMODULE __thiscall FUN_00460688(void *this,int *param_1,int param_2);
void FUN_00460828(int param_1,int param_2,int param_3,undefined4 param_4,int param_5);
double FUN_00460b28(int param_1);
double FUN_00460b31(int param_1);
uint __thiscall FUN_00460c4b(void *this,undefined4 *param_1,void *param_2);
void __thiscall FUN_00460d09(void *this,int param_1,int *param_2);
void __thiscall FUN_00460d1d(void *this,int param_1,int *param_2);
undefined4 __fastcall FUN_00460d31(int param_1,uint param_2,int param_3,int *param_4);
undefined4 __fastcall FUN_00460db0(int param_1,uint param_2,int param_3,int *param_4);
undefined4 __thiscall FUN_00460e10(void *this,int param_1,int *param_2);
undefined4 __fastcall FUN_00461193(int param_1,uint param_2,int param_3,int *param_4);
undefined4 __thiscall FUN_004611f4(void *this,HMODULE param_1,int *param_2);
undefined4 __fastcall FUN_0046128e(int *param_1,uint param_2,int param_3,int *param_4);
undefined4 __thiscall FUN_0046133c(void *this,int param_1,double *param_2);
undefined4 FUN_00461450(int param_1,int *param_2);
undefined4 __thiscall FUN_0046157b(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_004615e5(void *this,int param_1,double *param_2);
undefined4 FUN_004616fd(int param_1,int *param_2);
undefined4 __thiscall FUN_0046172f(void *this,DWORD param_1,int *param_2);
undefined4 __thiscall FUN_004618b9(void *this,int param_1,double *param_2);
undefined4 __thiscall FUN_00461945(void *this,HANDLE param_1,int *param_2);
undefined4 FUN_00461bdf(int param_1,int *param_2);
undefined4 __thiscall FUN_00461dd6(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00461ebe(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00461f44(void *this,uint param_1,int *param_2);
void __thiscall FUN_00462028(void *this,int param_1,double *param_2);
void __thiscall FUN_0046203e(void *this,int param_1,double *param_2);
undefined4 __thiscall FUN_00462054(void *this,int param_1,double *param_2);
undefined4 __thiscall FUN_004620b0(void *this,int param_1,double *param_2);
void __thiscall FUN_0046210c(void *this,int param_1,double *param_2);
undefined4 __thiscall FUN_00462124(void *this,int param_1,double *param_2);
undefined4 __fastcall FUN_00462182(int *param_1,uint param_2,int param_3,int *param_4);
bool __fastcall FUN_004621f3(undefined4 *param_1);
void __fastcall FUN_00462205(undefined4 *param_1);
undefined4 __thiscall FUN_00462230(void *this,char param_1,int param_2,uint param_3,double *param_4);
undefined4 __thiscall FUN_00462455(void *this,int param_1,int param_2);
undefined4 __thiscall FUN_004624d4(void *this,char param_1,char param_2,int param_3,double *param_4);
void __fastcall FUN_00462961(int param_1);
void __thiscall FUN_00462990(void *this,undefined4 *param_1);
void __thiscall FUN_004629e8(void *this,undefined4 *param_1);
void __thiscall FUN_00462a71(void *this,undefined4 *param_1);
undefined1 * __fastcall FUN_00462afc(undefined4 *param_1);
undefined4 __thiscall FUN_00462b19(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00462e29(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_00462fd6(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_004631bc(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00463639(void *this,int param_1,int *param_2);
bool __fastcall FUN_00463bc9(undefined4 *param_1);
void __fastcall FUN_00463bdb(undefined4 *param_1);
undefined1 FUN_00463c06(undefined4 *param_1,undefined4 *param_2,LPWSTR param_3,DWORD param_4);
undefined4 __fastcall FUN_00463d72(HKEY param_1,uint param_2);
void FUN_00463e8a(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,uint param_5);
undefined4 * __thiscall FUN_00463f68(void *this,undefined4 *param_1);
undefined4 __thiscall FUN_00463f9b(void *this,int param_1,int *param_2);
void __thiscall FUN_004640b3(void *this,int param_1,int *param_2);
undefined4 __fastcall FUN_004640d4(int *param_1,uint param_2,int param_3,DWORD *param_4);
undefined4 __thiscall FUN_0046421d(void *this,int param_1,int *param_2);
void __thiscall FUN_00464279(void *this,int param_1,int *param_2);
void FUN_0046429a(undefined4 *param_1,int *param_2,double param_3);
undefined4 __thiscall FUN_00464308(void *this,int param_1,int *param_2,undefined *param_3,undefined *param_4,undefined *param_5);
void __thiscall FUN_00464468(void *this,undefined4 *param_1);
int __thiscall FUN_004644a8(void *this,uint param_1);
undefined4 FUN_004644c9(int param_1,int *param_2);
undefined4 FUN_00464502(int param_1,void *param_2);
undefined4 __thiscall FUN_00464585(void *this,int param_1,void *param_2);
undefined4 FUN_00464751(int param_1,void *param_2);
undefined4 FUN_004647b2(int param_1,int *param_2);
undefined4 __thiscall FUN_0046482e(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_004649ca(void *this,int param_1,int *param_2);
undefined4 FUN_00464b00(int param_1,int *param_2);
undefined4 FUN_00464b60(int param_1,int *param_2);
undefined4 FUN_00464bc0(int param_1,int *param_2);
undefined4 FUN_00464c20(int param_1,int *param_2);
undefined4 FUN_00464c80(int param_1,uint *param_2);
undefined4 FUN_00464cb0(int param_1,uint *param_2);
undefined4 FUN_00464ce0(int param_1,int *param_2);
undefined4 FUN_00464d40(int param_1,int *param_2);
undefined4 FUN_00464da9(int param_1,int *param_2);
undefined4 FUN_00464e09(int param_1,int *param_2);
undefined4 FUN_00464e69(int param_1,void *param_2);
undefined4 FUN_00464edd(int param_1,int *param_2);
undefined4 FUN_00464f12(int param_1,void *param_2);
undefined4 __thiscall FUN_00464f73(void *this,int param_1,void *param_2);
undefined4 FUN_0046510c(int param_1,void *param_2);
undefined4 FUN_00465249(int param_1,void *param_2);
undefined4 FUN_004652c1(int param_1,void *param_2);
undefined4 __fastcall FUN_00465322(undefined4 param_1,uint param_2,int param_3,void *param_4);
undefined4 FUN_004654e7(int param_1,int *param_2);
undefined4 FUN_004656b0(int param_1,void *param_2);
undefined4 FUN_004657af(int param_1,void *param_2);
undefined4 FUN_00465826(int param_1,void *param_2);
uint FUN_00465887(longlong *param_1);
uint FUN_00465981(longlong *param_1);
void __fastcall FUN_00465a10(undefined4 *param_1);
void __fastcall FUN_00465a3a(int *param_1,uint param_2,int param_3,int *param_4);
void __fastcall FUN_00465a4e(int *param_1,uint param_2,int param_3,int *param_4);
undefined4 __thiscall FUN_00465a62(void *this,undefined4 param_1,int *param_2);
undefined4 __fastcall FUN_00465add(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 FUN_00465b17(int param_1,int *param_2);
undefined4 __fastcall FUN_00465b64(void *param_1,uint param_2,uint param_3,uint *param_4);
undefined4 __fastcall FUN_00465bae(int *param_1,uint param_2,wchar_t *param_3,void *param_4);
undefined4 FUN_00465c0e(int param_1,int *param_2);
undefined4 __fastcall FUN_00465d19(undefined4 param_1,uint param_2,int param_3,int *param_4);
undefined4 FUN_00465d5e(int param_1,int *param_2);
longlong __fastcall FUN_00465da8(undefined4 param_1,uint param_2,int param_3);
undefined4 FUN_00465dd8(int param_1);
undefined4 __thiscall FUN_00465e46(void *this,int param_1,int *param_2);
undefined4 FUN_00465f49(int param_1);
void __fastcall FUN_00465fb7(undefined4 param_1,uint param_2,int param_3);
undefined4 __thiscall FUN_00465fdc(void *this,int param_1,int *param_2);
undefined4 __fastcall FUN_00466065(int *param_1,uint param_2,int param_3,int param_4,int *param_5);
undefined1 __thiscall FUN_0046615a(void *this,int param_1);
undefined4 __thiscall FUN_004662a2(void *this,UINT param_1,int *param_2);
undefined4 __thiscall FUN_0046638d(void *this,void *param_1,int *param_2);
undefined4 __thiscall FUN_0046682c(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00466868(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_004668a4(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_004668e0(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_0046697c(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_004669d1(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00466b06(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_00466b8d(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00466bc9(void *this,void *param_1,WPARAM *param_2);
undefined4 __thiscall FUN_00466f44(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_0046702b(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_004670be(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_0046712e(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_0046716a(void *this,void *param_1,WPARAM *param_2);
undefined4 __thiscall FUN_0046748e(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_004674ff(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_0046764f(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_004679ff(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00467ac9(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00467b2f(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00467b90(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00467bd9(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00467ca5(void *this,undefined4 param_1,int *param_2);
undefined4 __thiscall FUN_00467d96(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_00467e16(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00467ef6(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00467f5b(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00468089(void *this,DWORD param_1,double *param_2);
undefined4 __thiscall FUN_00468111(void *this,int param_1,uint *param_2);
undefined4 __thiscall FUN_004681bc(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_00468251(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_004682cc(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_0046832f(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_004684de(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00468700(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_00468909(void *this,int param_1,int *param_2);
undefined4 __thiscall FUN_004689a8(void *this,int param_1,int *param_2);
undefined4 __fastcall FUN_00468a37(int *param_1,uint param_2,int param_3,int *param_4);
undefined4 __thiscall FUN_00468aeb(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_00468b43(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_00468b9b(void *this,int param_1,void *param_2);
undefined4 __thiscall FUN_00468bf3(void *this,int param_1,void *param_2);
int __fastcall FUN_00468c4b(int *param_1);
void __thiscall FUN_00468caa(void *this,int param_1);
undefined4 * __thiscall FUN_00468cf2(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_00468d23(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_00468d5d(void *this,byte param_1);
int * __fastcall FUN_00468d7c(int *param_1);
undefined4 * __fastcall FUN_00468d91(undefined4 *param_1);
void __thiscall FUN_00468dad(void *this,int param_1,int *param_2,int param_3,int param_4,int param_5);
void __thiscall FUN_00468e5c(void *this,int param_1,int *param_2,int param_3,int param_4);
void FUN_00468ecc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,uint param_6,DWORD param_7,char param_8);
void FUN_00468fc8(int param_1,int param_2);
uint FUN_004690e2(undefined4 *param_1,undefined4 *param_2,HMENU param_3,LPCWSTR param_4,int param_5,int param_6,int param_7,int param_8,uint param_9,undefined4 param_10,int param_11);
uint FUN_004691a8(int param_1,int *param_2,undefined4 param_3,int *param_4,undefined2 param_5,undefined2 param_6,int param_7,int param_8,uint param_9,uint param_10);
undefined4 FUN_004692b1(undefined4 *param_1,undefined4 *param_2,HMENU param_3,LPCWSTR param_4,int param_5,int param_6,int param_7,int param_8,uint param_9,DWORD param_10);
undefined4 FUN_0046934b(undefined4 *param_1,undefined4 *param_2,HMENU param_3,LPCWSTR param_4,int param_5,int param_6,int param_7,int param_8,uint param_9,uint param_10);
undefined4 FUN_004693cf(undefined4 *param_1,undefined4 *param_2,HMENU param_3,short *param_4,int param_5,int param_6,int param_7,int param_8,uint param_9,DWORD param_10);
uint FUN_00469486(int param_1,int param_2,undefined4 param_3,int param_4);
undefined4 FUN_0046955e(undefined4 *param_1,undefined4 *param_2,HMENU param_3,wchar_t *param_4,int param_5,int param_6,int param_7,int param_8,uint param_9,DWORD param_10);
undefined4 FUN_00469617(undefined4 *param_1,undefined4 *param_2,HMENU param_3,LPCWSTR param_4,int param_5,int param_6,int param_7,int param_8,uint param_9,DWORD param_10);
undefined4 FUN_004696c6(undefined4 *param_1,undefined4 *param_2,HMENU param_3,LPCWSTR param_4,int param_5,int param_6,int param_7,int param_8,uint param_9,uint param_10);
undefined1 FUN_0046975a(undefined4 *param_1,undefined4 *param_2,HMENU param_3,wchar_t *param_4,int param_5,int param_6,int param_7,int param_8,uint param_9,uint param_10);
int FUN_00469867(undefined4 *param_1,undefined4 *param_2,HMENU param_3,LPCWSTR param_4,int param_5,int param_6,int param_7,int param_8,uint param_9,DWORD param_10);
undefined4 FUN_004698fe(undefined4 *param_1,undefined4 *param_2,HMENU param_3,LPCWSTR param_4,int param_5,int param_6,int param_7,int param_8,uint param_9,uint param_10);
uint FUN_004699a5(undefined4 *param_1,undefined4 *param_2,HMENU param_3,short *param_4,int param_5,int param_6,int param_7,int param_8,uint param_9,DWORD param_10);
undefined4 FUN_00469a75(undefined4 *param_1,undefined4 *param_2,HMENU param_3,int param_4,int param_5,int param_6,int param_7,int param_8,size_t param_9,uint param_10);
uint FUN_00469c16(undefined4 param_1,int param_2,undefined4 param_3,int param_4,WPARAM param_5);
uint FUN_00469e43(undefined4 *param_1,int param_2,UINT param_3,UINT param_4,LPWSTR param_5,UINT param_6);
uint FUN_00469f8a(undefined4 *param_1,int param_2,UINT param_3,UINT param_4,LPWSTR param_5,UINT param_6,int param_7);
undefined4 FUN_0046a0d6(undefined4 *param_1,undefined4 *param_2,HMENU param_3,wchar_t *param_4,int param_5,int param_6,uint param_7,uint param_8,uint param_9,DWORD param_10);
uint FUN_0046a1b6(undefined4 *param_1,undefined4 *param_2,HMENU param_3,LPCWSTR param_4,int param_5,int param_6,int param_7,int param_8,uint param_9,uint param_10);
undefined4 FUN_0046a2c8(undefined4 *param_1,undefined4 *param_2,HMENU param_3,undefined4 param_4,int param_5,int param_6,int param_7,int param_8,uint param_9,uint param_10);
undefined4 FUN_0046a37b(undefined4 *param_1,undefined4 *param_2,HMENU param_3,LPCWSTR param_4,int param_5,int param_6,int param_7,int param_8,uint param_9,uint param_10);
undefined4 FUN_0046a409(undefined4 *param_1,undefined4 *param_2,HMENU param_3,undefined4 param_4,int param_5,int param_6,int param_7,int param_8,uint param_9,uint param_10);
uint FUN_0046a4ab(undefined4 *param_1,undefined4 *param_2,HMENU param_3,undefined4 param_4,int param_5,int param_6,int param_7,int param_8,uint param_9,uint param_10);
uint FUN_0046a587(undefined4 *param_1,int param_2,undefined4 param_3,short *param_4);
undefined4 FUN_0046a63f(undefined4 *param_1,undefined4 *param_2,HMENU param_3,undefined4 param_4,int param_5,int param_6,int param_7,int param_8,uint param_9,uint param_10);
uint FUN_0046a76a(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
uint FUN_0046a88a(int *param_1,undefined4 *param_2,HMENU param_3,wchar_t *param_4,uint param_5);
LRESULT FUN_0046a965(int param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
void FUN_0046a9a9(int *param_1);
uint FUN_0046a9d2(UINT param_1,undefined4 *param_2);
uint FUN_0046aa81(int param_1);
LPWSTR FUN_0046aace(UINT param_1,uint *param_2,char param_3);
LRESULT FUN_0046b1de(int param_1,UINT param_2,undefined4 *param_3,int param_4,undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9);
bool FUN_0046b276(int param_1,int *param_2,undefined1 param_3);
uint FUN_0046b2d9(int param_1);
undefined4 FUN_0046b33a(int param_1,COLORREF param_2);
undefined4 FUN_0046b544(int param_1,uint param_2);
bool FUN_0046b67d(int param_1,undefined2 param_2);
undefined4 FUN_0046b6c4(UINT param_1,wchar_t *param_2,short *param_3);
undefined4 FUN_0046bc51(int param_1,int param_2,wchar_t *param_3,uint param_4,DWORD param_5,double param_6);
undefined4 __fastcall FUN_0046bd2e(undefined4 param_1,uint param_2,int param_3,HIMAGELIST param_4,HIMAGELIST param_5);
undefined4 FUN_0046c3de(int param_1,WPARAM param_2,WPARAM param_3);
bool FUN_0046c496(int param_1,int *param_2);
undefined4 FUN_0046c4d7(int param_1,int param_2,LONG param_3,int param_4,int param_5);
undefined4 FUN_0046c657(int param_1,int param_2);
uint FUN_0046c6e9(int param_1,uint param_2);
bool FUN_0046ccf7(int param_1,uint param_2,int param_3);
undefined4 FUN_0046ce58(int param_1,wchar_t *param_2,int param_3,WPARAM param_4,char param_5,char param_6);
void __thiscall FUN_0046d0ec(void *this,undefined4 *param_1,int param_2);
undefined4 FUN_0046d13e(int param_1);
void FUN_0046d1b5(undefined4 param_1);
undefined4 FUN_0046d285(uint param_1,undefined4 *param_2);
undefined4 FUN_0046d575(uint param_1,undefined4 *param_2);
void FUN_0046d75f(HWND param_1);
undefined4 FUN_0046d768(HWND param_1);
int FUN_0046d7de(int *param_1,LONG param_2,LONG param_3);
uint FUN_0046d90e(wchar_t *param_1,int *param_2,wchar_t *param_3);
void FUN_0046d974(void);
bool FUN_0046d9fa(HWND param_1);
undefined4 FUN_0046da42(HWND param_1,int *param_2,int *param_3,int *param_4,int *param_5,uint *param_6);
uint __thiscall FUN_0046db2b(void *this,void *param_1);
bool FUN_0046db97(LONG *param_1,LONG *param_2,HWND param_3);
undefined4 FUN_0046dbf7(int param_1,int *param_2);
void FUN_0046dc9a(LPACCEL param_1,int param_2,HWND param_3);
undefined4 FUN_0046dd20(undefined4 param_1,undefined4 param_2,int param_3,int param_4,HWND param_5);
void FUN_0046dd80(undefined4 param_1,undefined4 param_2,HWND param_3);
undefined4 __fastcall FUN_0046ddd3(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,int param_5,undefined4 param_6,HWND param_7,double param_8);
undefined4 FUN_0046de69(uint param_1,int param_2,HWND param_3);
undefined4 FUN_0046df42(HWND param_1,int param_2);
void FUN_0046dfde(undefined4 *param_1,undefined4 *param_2,BOOL param_3);
void FUN_0046e059(int param_1,int param_2,int param_3);
uint FUN_0046e062(int param_1,WPARAM param_2);
uint FUN_0046e2eb(uint param_1);
void FUN_0046e32e(LPWSTR param_1);
void __thiscall FUN_0046e397(void *this,int param_1,WPARAM param_2);
bool __fastcall FUN_0046e4f5(undefined4 param_1,uint param_2,undefined4 *param_3,wchar_t *param_4,undefined4 param_5,undefined4 param_6,undefined4 *param_7);
HWND FUN_0046e731(undefined4 *param_1,LPCWSTR param_2,int *param_3,int *param_4);
void __fastcall FUN_0046e881(int *param_1);
void __thiscall FUN_0046e8a1(void *this,undefined4 *param_1);
void __thiscall FUN_0046e8d7(void *this,undefined4 *param_1);
void __thiscall FUN_0046e92f(void *this,undefined4 *param_1);
void __thiscall FUN_0046e96f(void *this,undefined4 *param_1);
void FUN_0046e9af(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
void FUN_0046e9b8(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
undefined4 FUN_0046ea19(HWND param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4);
void FUN_0046ea6a(HDC param_1,int param_2,int param_3,int param_4,int param_5,byte param_6);
void FUN_0046eac4(HDC param_1,int param_2);
void FUN_0046ebf6(HDC param_1,int param_2,int param_3,byte param_4);
void FUN_0046ec7c(HWND param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,WPARAM param_5,int param_6);
void FUN_0046ecd4(HWND param_1,uint param_2,int param_3,WPARAM param_4,int param_5);
void FUN_0046eeeb(HWND param_1,HMENU param_2,HWND param_3,WPARAM param_4);
void FUN_0046f1d7(HWND param_1,HWND param_2,undefined2 param_3,undefined2 param_4);
void FUN_0046f2b3(HWND param_1,HDC param_2);
void FUN_0046f2d0(HWND param_1,int *param_2);
void FUN_0046f351(HWND param_1,HDROP param_2);
void FUN_0046f5ab(undefined4 param_1,int param_2,HWND param_3,WPARAM param_4,LPARAM param_5);
void FUN_0046f5da(undefined4 param_1,int param_2,HWND param_3,WPARAM param_4,LPARAM param_5);
void FUN_0046f609(undefined4 param_1,int param_2,HWND param_3,WPARAM param_4,LPARAM param_5);
void FUN_0046f654(undefined4 param_1,int param_2,HWND param_3,WPARAM param_4,LPARAM param_5);
void __thiscall FUN_0046f689(void *this,HWND param_1,uint param_2,uint param_3,WPARAM param_4);
void FUN_0046f6e1(HWND param_1);
LRESULT FUN_0046f7c3(HWND param_1,undefined2 param_2,undefined2 param_3);
LRESULT FUN_0046f7ff(HWND param_1,WPARAM param_2,undefined4 *param_3);
void FUN_004700af(HWND param_1,HWND param_2,uint param_3,ushort param_4,int param_5);
void FUN_00470133(HWND param_1,WPARAM param_2,uint param_3,int param_4);
void FUN_0047044c(HWND param_1,uint param_2,undefined2 param_3,undefined2 param_4);
ushort * __fastcall FUN_004704ff(ushort *param_1,int param_2,uint param_3);
int __cdecl FUN_0047064e(uint param_1,int param_2,int *param_3,int param_4);
void __fastcall FUN_004706ae(int param_1,undefined8 *param_2,int param_3,undefined2 param_4);
int __fastcall FUN_0047074c(int param_1,undefined4 *param_2,uint param_3,int param_4,uint *param_5);
uint __fastcall FUN_004707d9(uint param_1,undefined4 param_2,uint param_3,uint param_4);
int __fastcall FUN_00470991(ushort *param_1,uint param_2);
undefined4 __fastcall FUN_004709dc(int param_1,undefined4 *param_2);
undefined4 __fastcall FUN_00470a57(ushort *param_1,ushort *param_2,undefined4 *param_3,int param_4,int param_5);
undefined4 __fastcall FUN_00470a95(int param_1);
char * __fastcall FUN_00470b11(int param_1);
int __fastcall FUN_00470b31(int param_1,int param_2,int param_3,int param_4);
uint __fastcall FUN_00470e03(uint *param_1,uint param_2,uint *param_3,uint *param_4);
undefined4 __fastcall FUN_00470eb3(int *param_1,undefined4 *param_2,uint *param_3,uint *param_4,undefined4 *param_5);
bool __fastcall FUN_00470f9a(ushort *param_1);
ushort * __fastcall FUN_0047100c(ushort *param_1,int *param_2,int *param_3,undefined4 *param_4);
int __fastcall FUN_004710c1(int param_1,ushort *param_2,uint param_3,int param_4,int param_5);
int __fastcall FUN_0047125a(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5);
int __fastcall FUN_004712c8(ushort *param_1,byte *param_2);
int __fastcall FUN_004712f7(int param_1,ushort *param_2);
int __fastcall FUN_00471327(int param_1,ushort *param_2,int param_3);
undefined4 __fastcall FUN_0047135c(int param_1,int param_2,ushort *param_3,undefined4 *param_4,int param_5);
ushort __fastcall FUN_00471415(uint param_1,ushort *param_2,int param_3);
undefined4 __fastcall FUN_00471819(uint param_1,ushort *param_2);
undefined4 __fastcall FUN_0047184f(ushort *param_1,int param_2,int *param_3);
ulonglong __fastcall FUN_004718d0(undefined4 param_1,undefined4 param_2);
ulonglong FUN_00471906(void);
void thunk_FUN_0041e8f5(void);
void FUN_00471a3a(void);
void thunk_FUN_0041e957(void);
void thunk_FUN_0041eca0(void);
void thunk_FUN_0041e9f4(void);
void thunk_FUN_004038ab(void);
void FUN_00471a4f(void);
void thunk_FUN_00405337(void);
void thunk_FUN_00404b81(void);
void thunk_FUN_0041e91e(void);
void FUN_00471a9b(void);
void FUN_0047241a(void);
void __fastcall FUN_0047242c(int *param_1);
void __fastcall FUN_0047243d(undefined4 *param_1);
void __fastcall FUN_004724fa(ushort *param_1);
undefined1 * FUN_00472d3e(undefined4 param_1,undefined4 param_2,uint param_3);
char FUN_0047344e(void);
undefined4 FUN_00473848(void);
undefined4 FUN_0047385b(void);
undefined4 switchD_0040b528::caseD_1a(void);
undefined4 FUN_004739a7(void);
void FUN_004739bc(void);
void FUN_00473c0b(void);
char FUN_00473f01(void);
bool FUN_00474328(void);
void FUN_0047461a(void);
undefined4 __fastcall FUN_004749a1(int *param_1);
void switchD_00411747::caseD_2(void);
float10 __fastcall FUN_00474d80(int param_1);
float10 __fastcall switchD_00412cff::caseD_2(longlong *param_1);
bool FUN_00474deb(void);
void __fastcall FUN_00475045(undefined4 *param_1);
void __fastcall FUN_00475056(void *param_1);
void __fastcall FUN_00475067(int *param_1);
undefined4 FUN_0047559b(undefined4 param_1,undefined4 param_2,uint param_3,double param_4,undefined4 param_5,HWND__ param_6,VARIANTARG *param_7,undefined4 param_8,undefined4 *param_9,int param_10,HWND param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,DWORD param_16,undefined4 param_17,int *param_18,HWND param_19,undefined2 *param_20,WPARAM param_21,LPARAM param_22,int *param_23,LONG param_24,HWND param_25,undefined4 param_26,undefined4 param_27,DWORD param_28,int param_29,undefined4 param_30,undefined4 param_31,undefined4 param_32,HWND param_33,undefined4 param_34,undefined4 param_35,undefined4 param_36);
undefined4 FUN_00475650(undefined4 param_1,undefined4 param_2,uint param_3,double param_4,undefined4 param_5,int param_6,VARIANTARG *param_7,undefined4 param_8,undefined4 *param_9,int param_10,HWND param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,DWORD param_16,undefined4 param_17,int *param_18,HWND param_19,undefined2 *param_20,WPARAM param_21,LPARAM param_22,int *param_23,LONG param_24,LONG param_25,undefined4 param_26,undefined4 param_27,DWORD param_28,int param_29,undefined4 param_30,undefined4 param_31,undefined4 param_32,HWND param_33,undefined4 param_34,undefined4 param_35,undefined4 param_36);
undefined4 switchD_0040edf4::caseD_0(undefined4 param_1,undefined4 param_2,uint param_3,double param_4,undefined4 param_5,HWND__ param_6,VARIANTARG *param_7,undefined4 param_8,undefined4 *param_9,int param_10,HWND param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,DWORD param_16,undefined4 param_17,int *param_18,HWND param_19,undefined2 *param_20,WPARAM param_21,LPARAM param_22,int *param_23,LONG param_24,HWND param_25,undefined4 param_26,undefined4 param_27,DWORD param_28,int param_29,undefined4 param_30,undefined4 param_31,undefined4 param_32,HWND param_33,undefined4 param_34,undefined4 param_35,undefined4 param_36);
undefined4 FUN_004759ef(void);
void __cdecl FUN_00475e88(uint param_1);
void __fastcall FUN_00475ecd(undefined4 *param_1);
void __fastcall FUN_00475ee2(undefined4 *param_1);
void __fastcall FUN_00476328(undefined4 *param_1);
void FUN_00476d76(void);
void FUN_004770fa(void);
void FUN_00477288(void);
void FUN_004772b3(void);
void FUN_00477399(void);
void FUN_004776d8(void);
void FUN_00477720(void);
void __fastcall FUN_00477968(int param_1);
void __fastcall FUN_00477adf(undefined4 param_1,int param_2);
void switchD_0040e321::caseD_2(void);
void switchD_0040e2e4::caseD_2(void);
void __fastcall switchD_0040ef3b::caseD_5(void *param_1);
void __fastcall FUN_00478c2b(short param_1,int param_2);
undefined4 FUN_00479286(void);
undefined4 FUN_00479477(void);
uint __fastcall FUN_00479589(int param_1);
void __fastcall FUN_004796e3(int param_1);
void FUN_004796f6(void);
void FUN_0047970e(void);
undefined4 FUN_0047977a(void);
undefined4 FUN_0047983c(void);
undefined4 FUN_00479933(void);
undefined4 __thiscall FUN_00479cdf(void *this);
undefined4 FUN_0047a15d(void);
undefined4 FUN_0047a401(void);
undefined4 FUN_0047a4dd(void);
undefined4 __thiscall FUN_0047a761(void *this);
undefined4 FUN_0047a7cb(void);
undefined4 FUN_0047a7de(uint param_1);
undefined4 FUN_0047a904(void);
void switchD_0041132d::caseD_5(void);
void switchD_0041d97a::caseD_0(void);
undefined4 __fastcall FUN_0047b47d(undefined4 *param_1,short *param_2);
undefined4 __fastcall FUN_0047b4d2(undefined4 *param_1,wchar_t *param_2);
undefined4 FUN_0047b676(void);
undefined4 switchD_004125b6::caseD_2(void);
undefined4 switchD_00412589::caseD_2(void);
undefined4 __fastcall FUN_0047be29(undefined4 *param_1);
undefined4 FUN_0047c2a9(void);
void __fastcall FUN_0047c37b(undefined4 param_1,int *param_2);
undefined4 FUN_0047c803(undefined4 param_1,undefined4 param_2,int param_3,undefined8 *param_4,int *param_5,undefined4 param_6,undefined8 *param_7,uint param_8,uint param_9,undefined8 *param_10,int param_11,uint param_12,int *param_13,uint param_14,uint param_15,undefined8 *param_16,undefined8 *param_17);
undefined4 FUN_0047cb44(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,int param_6);
void FUN_0047ccf9(void);
HMENU __fastcall switchD_0041cb86::caseD_0(int param_1);
bool FUN_0047dc79(void);
bool FUN_0047dce6(void);
void switchD_0041b476::caseD_0(void);
void __fastcall FUN_0047df80(int param_1);
void FUN_0047e036(void);
void __fastcall FUN_0047e1be(undefined4 *param_1);
void __fastcall FUN_0047e1d3(undefined4 *param_1);
undefined4 FUN_0047e431(void);
void FUN_0047e875(void);
void __fastcall FUN_0047e8c1(uint param_1);
void __fastcall FUN_0047e8dc(uint param_1);
uint __fastcall FUN_0047f4c5(undefined4 param_1,uint *param_2);
uint __fastcall FUN_0047f4d6(int param_1,uint *param_2);
undefined4 __fastcall FUN_0047f58b(wchar_t *param_1,ushort *param_2);
undefined4 __fastcall switchD_004079d2::caseD_24(undefined4 param_1,ushort *param_2);
undefined4 FUN_0047ff93(void);
undefined4 __fastcall FUN_00480134(uint param_1,undefined8 *param_2);
undefined4 __fastcall FUN_004806ac(undefined4 param_1,ushort *param_2);
undefined4 __fastcall FUN_00480ef6(int param_1,ushort *param_2);
undefined4 FUN_00482315(void);
void FUN_004826da(void);
uint __fastcall FUN_00482872(ushort *param_1);
uint __fastcall FUN_0048287e(ushort *param_1,ushort param_2);
undefined4 FUN_00482b4e(void);
undefined4 FUN_00482bfe(void);
undefined4 FUN_00482c05(void);
undefined4 FUN_00483264(void);
undefined4 FUN_00489c24(void);
void FUN_0048b879(void);
int FUN_0048be61(void);
int __fastcall FUN_0048bece(int param_1,int param_2);
int __fastcall FUN_0048c4f3(undefined4 param_1,int param_2);
int __fastcall FUN_0048c503(undefined4 param_1,int param_2);

