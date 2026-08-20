# DBMgr

`_ZN5DBMgrC1Ev`

`DBMgr::DBMgr()`

| 类 | 地址 |
|---|---|
| `DBMgr` | `0x083f48de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f48de  _ZN5DBMgrC1Ev
#           DBMgr::DBMgr()
# range [0x083f48de, 0x083f4a1b]
083f48de +0x000:  push   %ebp
083f48df +0x001:  mov    %esp,%ebp
083f48e1 +0x003:  push   %edi
083f48e2 +0x004:  push   %esi
083f48e3 +0x005:  push   %ebx
083f48e4 +0x006:  sub    $0x3c,%esp
083f48e7 +0x009:  mov    0x8(%ebp),%eax
083f48ea +0x00c:  add    $0xc,%eax
083f48ed +0x00f:  mov    %eax,(%esp)
083f48f0 +0x012:  call   083f568c <_GLOBAL__I__ZN5MySQLC2Ev+0x38d>  ; global constructors keyed to MySQL::MySQL()+0x38d
083f48f5 +0x017:  mov    0x8(%ebp),%eax
083f48f8 +0x01a:  add    $0x20,%eax
083f48fb +0x01d:  mov    %eax,(%esp)
083f48fe +0x020:  call   083f5760 <_GLOBAL__I__ZN5MySQLC2Ev+0x461>  ; global constructors keyed to MySQL::MySQL()+0x461
083f4903 +0x025:  movl   $0x462950,(%esp)
083f490a +0x02c:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
083f490f +0x031:  mov    %eax,%esi
083f4911 +0x033:  mov    %esi,%eax
083f4913 +0x035:  movl   $0x11,(%eax)
083f4919 +0x03b:  mov    %esi,%eax
083f491b +0x03d:  add    $0x4,%eax
083f491e +0x040:  mov    %eax,%ebx
083f4920 +0x042:  mov    $0x10,%edi
083f4925 +0x047:  jmp    083f4938 <+0x5a>
083f4927 +0x049:  mov    %ebx,(%esp)
083f492a +0x04c:  call   083f3ac8 <_ZN5MySQLC1Ev>  ; MySQL::MySQL()
083f492f +0x051:  add    $0x4208c,%ebx
083f4935 +0x057:  sub    $0x1,%edi
083f4938 +0x05a:  cmp    $0xffffffff,%edi
083f493b +0x05d:  setne  %al
083f493e +0x060:  test   %al,%al
083f4940 +0x062:  jne    083f4927 <+0x49>
083f4942 +0x064:  mov    %esi,%eax
083f4944 +0x066:  lea    0x4(%eax),%edx
083f4947 +0x069:  mov    0x8(%ebp),%eax
083f494a +0x06c:  mov    %edx,(%eax)
083f494c +0x06e:  mov    0x8(%ebp),%eax
083f494f +0x071:  mov    (%eax),%eax
083f4951 +0x073:  test   %eax,%eax
083f4953 +0x075:  jne    083f499b <+0xbd>
083f4955 +0x077:  movl   $0x5,0xc(%esp)
083f495d +0x07f:  movl   $0x301,0x8(%esp)
083f4965 +0x087:  movl   $&_ZZN5DBMgrC1EvE19__PRETTY_FUNCTION__,0x4(%esp)
083f496d +0x08f:  lea    -0x2c(%ebp),%eax
083f4970 +0x092:  mov    %eax,(%esp)
083f4973 +0x095:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083f4978 +0x09a:  movl   $0x301,0xc(%esp)
083f4980 +0x0a2:  movl   $&_ZZN5DBMgrC1EvE19__PRETTY_FUNCTION__,0x8(%esp)
083f4988 +0x0aa:  movl   $"[%s][%d]",0x4(%esp)
083f4990 +0x0b2:  lea    -0x2c(%ebp),%eax
083f4993 +0x0b5:  mov    %eax,(%esp)
083f4996 +0x0b8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083f499b +0x0bd:  movl   $0x0,-0x1c(%ebp)
083f49a2 +0x0c4:  jmp    083f49c1 <+0xe3>
083f49a4 +0x0c6:  mov    0x8(%ebp),%eax
083f49a7 +0x0c9:  mov    (%eax),%edx
083f49a9 +0x0cb:  mov    -0x1c(%ebp),%eax
083f49ac +0x0ce:  imul   $0x4208c,%eax,%eax
083f49b2 +0x0d4:  lea    (%edx,%eax,1),%eax
083f49b5 +0x0d7:  mov    %eax,(%esp)
083f49b8 +0x0da:  call   083f3ce4 <_ZN5MySQL4initEv>  ; MySQL::init()
083f49bd +0x0df:  addl   $0x1,-0x1c(%ebp)
083f49c1 +0x0e3:  cmpl   $0x10,-0x1c(%ebp)
083f49c5 +0x0e7:  setle  %al
083f49c8 +0x0ea:  test   %al,%al
083f49ca +0x0ec:  jne    083f49a4 <+0xc6>
083f49cc +0x0ee:  mov    0x8(%ebp),%eax
083f49cf +0x0f1:  movb   $0x0,0x8(%eax)
083f49d3 +0x0f5:  mov    0x8(%ebp),%eax
083f49d6 +0x0f8:  movl   $0xffffffff,0x4(%eax)
083f49dd +0x0ff:  add    $0x3c,%esp
083f49e0 +0x102:  pop    %ebx
083f49e1 +0x103:  pop    %esi
083f49e2 +0x104:  pop    %edi
083f49e3 +0x105:  pop    %ebp
083f49e4 +0x106:  ret
083f49e5 +0x107:  mov    %edx,%ebx
083f49e7 +0x109:  mov    %eax,%esi
083f49e9 +0x10b:  mov    0x8(%ebp),%eax
083f49ec +0x10e:  add    $0x20,%eax
083f49ef +0x111:  mov    %eax,(%esp)
083f49f2 +0x114:  call   083f5678 <_GLOBAL__I__ZN5MySQLC2Ev+0x379>  ; global constructors keyed to MySQL::MySQL()+0x379
083f49f7 +0x119:  mov    %esi,%eax
083f49f9 +0x11b:  mov    %ebx,%edx
083f49fb +0x11d:  jmp    083f49fd <+0x11f>
083f49fd +0x11f:  mov    %edx,%ebx
083f49ff +0x121:  mov    %eax,%esi
083f4a01 +0x123:  mov    0x8(%ebp),%eax
083f4a04 +0x126:  add    $0xc,%eax
083f4a07 +0x129:  mov    %eax,(%esp)
083f4a0a +0x12c:  call   083f5664 <_GLOBAL__I__ZN5MySQLC2Ev+0x365>  ; global constructors keyed to MySQL::MySQL()+0x365
083f4a0f +0x131:  mov    %esi,%eax
083f4a11 +0x133:  mov    %ebx,%edx
083f4a13 +0x135:  mov    %eax,(%esp)
083f4a16 +0x138:  call   08ae3750 <_Unwind_Resume>
083f4a1b +0x13d:  nop
```

## 反编译 C

```c
// DBMgr::DBMgr @ 0x83f48de

/* DBMgr::DBMgr() */

void __thiscall DBMgr::DBMgr(DBMgr *this)

{
  undefined4 *puVar1;
  MySQL *this_00;
  int iVar2;
  cMyTrace local_30 [16];
  int local_20;
  
  __gnu_cxx::
  hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
  ::hash_map((hash_map<int,DBMgr::stUserDBInfo_t,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<DBMgr::stUserDBInfo_t>>
              *)(this + 0xc));
                    /* try { // try from 083f48fe to 083f4902 has its CatchHandler @ 083f49fd */
  std::
  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
  ::map((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
         *)(this + 0x20));
                    /* try { // try from 083f490a to 083f49bc has its CatchHandler @ 083f49e5 */
  puVar1 = operator_new__(0x462950);
  *puVar1 = 0x11;
  this_00 = (MySQL *)(puVar1 + 1);
  for (iVar2 = 0x10; iVar2 != -1; iVar2 = iVar2 + -1) {
    MySQL::MySQL(this_00);
    this_00 = this_00 + 0x4208c;
  }
  *(undefined4 **)this = puVar1 + 1;
  if (*(int *)this == 0) {
    cMyTrace::cMyTrace(local_30,DBMgr()::__PRETTY_FUNCTION__,0x301,5);
    cMyTrace::operator()(local_30,"[%s][%d]",DBMgr()::__PRETTY_FUNCTION__,0x301);
  }
  for (local_20 = 0; local_20 < 0x11; local_20 = local_20 + 1) {
    MySQL::init((MySQL *)(*(int *)this + local_20 * 0x4208c));
  }
  this[8] = (DBMgr)0x0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  return;
}
```
