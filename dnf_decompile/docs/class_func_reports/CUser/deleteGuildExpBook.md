# deleteGuildExpBook

`_ZN5CUser18deleteGuildExpBookEv`

`CUser::deleteGuildExpBook()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867e898` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867e898  _ZN5CUser18deleteGuildExpBookEv
#           CUser::deleteGuildExpBook()
# range [0x0867e898, 0x0867ea57]
0867e898 +0x000:  push   %ebp
0867e899 +0x001:  mov    %esp,%ebp
0867e89b +0x003:  push   %esi
0867e89c +0x004:  push   %ebx
0867e89d +0x005:  sub    $0x50,%esp
0867e8a0 +0x008:  lea    -0x2c(%ebp),%eax
0867e8a3 +0x00b:  mov    %eax,(%esp)
0867e8a6 +0x00e:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0867e8ab +0x013:  lea    -0x38(%ebp),%eax
0867e8ae +0x016:  mov    %eax,(%esp)
0867e8b1 +0x019:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0867e8b6 +0x01e:  movl   $0x0,-0x10(%ebp)
0867e8bd +0x025:  movl   $0x4b0,-0xc(%ebp)
0867e8c4 +0x02c:  lea    -0x18(%ebp),%eax
0867e8c7 +0x02f:  lea    -0x10(%ebp),%edx
0867e8ca +0x032:  mov    %edx,0x8(%esp)
0867e8ce +0x036:  lea    -0xc(%ebp),%edx
0867e8d1 +0x039:  mov    %edx,0x4(%esp)
0867e8d5 +0x03d:  mov    %eax,(%esp)
0867e8d8 +0x040:  call   082b2c12 <_GLOBAL__I__ZN4CLog5this_E+0xf039>  ; global constructors keyed to CLog::this_+0xf039
0867e8dd +0x045:  sub    $0x4,%esp
0867e8e0 +0x048:  lea    -0x18(%ebp),%eax
0867e8e3 +0x04b:  mov    %eax,0x4(%esp)
0867e8e7 +0x04f:  lea    -0x20(%ebp),%eax
0867e8ea +0x052:  mov    %eax,(%esp)
0867e8ed +0x055:  call   082b2c5c <_GLOBAL__I__ZN4CLog5this_E+0xf083>  ; global constructors keyed to CLog::this_+0xf083
0867e8f2 +0x05a:  lea    -0x20(%ebp),%eax
0867e8f5 +0x05d:  mov    %eax,0x4(%esp)
0867e8f9 +0x061:  lea    -0x2c(%ebp),%eax
0867e8fc +0x064:  mov    %eax,(%esp)
0867e8ff +0x067:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0867e904 +0x06c:  lea    -0x38(%ebp),%eax
0867e907 +0x06f:  mov    %eax,0x8(%esp)
0867e90b +0x073:  lea    -0x2c(%ebp),%eax
0867e90e +0x076:  mov    %eax,0x4(%esp)
0867e912 +0x07a:  mov    0x8(%ebp),%eax
0867e915 +0x07d:  mov    %eax,(%esp)
0867e918 +0x080:  call   0867dba0 <_ZN5CUser18deleteSpecificItemERKSt6vectorISt4pairIiiESaIS2_EERS4_>  ; CUser::deleteSpecificItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
0867e91d +0x085:  movl   $0x0,0x4(%esp)
0867e925 +0x08d:  mov    0x8(%ebp),%eax
0867e928 +0x090:  mov    %eax,(%esp)
0867e92b +0x093:  call   0865db6c <_ZN5CUser14send_itemspaceEi>  ; CUser::send_itemspace(int)
0867e930 +0x098:  xor    $0x1,%eax
0867e933 +0x09b:  test   %al,%al
0867e935 +0x09d:  je     0867e98c <+0xf4>
0867e937 +0x09f:  mov    0x8(%ebp),%eax
0867e93a +0x0a2:  mov    %eax,(%esp)
0867e93d +0x0a5:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0867e942 +0x0aa:  movl   $0x0,0x4(%esp)
0867e94a +0x0b2:  mov    %eax,(%esp)
0867e94d +0x0b5:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0867e952 +0x0ba:  mov    %eax,0x14(%esp)
0867e956 +0x0be:  movl   $"deleteGuildExpBook, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_INVENTORY ) return FAILED",0x10(%esp)
0867e95e +0x0c6:  movl   $0x7c57,0xc(%esp)
0867e966 +0x0ce:  movl   $&_ZZN5CUser18deleteGuildExpBookEvE19__PRETTY_FUNCTION__,0x8(%esp)
0867e96e +0x0d6:  movl   $"user.cpp",0x4(%esp)
0867e976 +0x0de:  movl   $0x1,(%esp)
0867e97d +0x0e5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0867e982 +0x0ea:  mov    $0x0,%ebx
0867e987 +0x0ef:  jmp    0867ea1f <+0x187>
0867e98c +0x0f4:  movl   $0x2,0x4(%esp)
0867e994 +0x0fc:  mov    0x8(%ebp),%eax
0867e997 +0x0ff:  mov    %eax,(%esp)
0867e99a +0x102:  call   0865db6c <_ZN5CUser14send_itemspaceEi>  ; CUser::send_itemspace(int)
0867e99f +0x107:  xor    $0x1,%eax
0867e9a2 +0x10a:  test   %al,%al
0867e9a4 +0x10c:  je     0867e9f8 <+0x160>
0867e9a6 +0x10e:  mov    0x8(%ebp),%eax
0867e9a9 +0x111:  mov    %eax,(%esp)
0867e9ac +0x114:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0867e9b1 +0x119:  movl   $0x0,0x4(%esp)
0867e9b9 +0x121:  mov    %eax,(%esp)
0867e9bc +0x124:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0867e9c1 +0x129:  mov    %eax,0x14(%esp)
0867e9c5 +0x12d:  movl   $"deleteGuildExpBook, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_CARGO ) return FAILED",0x10(%esp)
0867e9cd +0x135:  movl   $0x7c5c,0xc(%esp)
0867e9d5 +0x13d:  movl   $&_ZZN5CUser18deleteGuildExpBookEvE19__PRETTY_FUNCTION__,0x8(%esp)
0867e9dd +0x145:  movl   $"user.cpp",0x4(%esp)
0867e9e5 +0x14d:  movl   $0x1,(%esp)
0867e9ec +0x154:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0867e9f1 +0x159:  mov    $0x0,%ebx
0867e9f6 +0x15e:  jmp    0867ea1f <+0x187>
0867e9f8 +0x160:  mov    0x8(%ebp),%eax
0867e9fb +0x163:  mov    %eax,(%esp)
0867e9fe +0x166:  call   086624f8 <_ZN5CUser15send_RedeemInfoEv>  ; CUser::send_RedeemInfo()
0867ea03 +0x16b:  mov    $0x1,%ebx
0867ea08 +0x170:  jmp    0867ea1f <+0x187>
0867ea0a +0x172:  mov    %edx,%ebx
0867ea0c +0x174:  mov    %eax,%esi
0867ea0e +0x176:  lea    -0x38(%ebp),%eax
0867ea11 +0x179:  mov    %eax,(%esp)
0867ea14 +0x17c:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0867ea19 +0x181:  mov    %esi,%eax
0867ea1b +0x183:  mov    %ebx,%edx
0867ea1d +0x185:  jmp    0867ea41 <+0x1a9>
0867ea1f +0x187:  lea    -0x38(%ebp),%eax
0867ea22 +0x18a:  mov    %eax,(%esp)
0867ea25 +0x18d:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0867ea2a +0x192:  test   %ebx,%ebx
0867ea2c +0x194:  lea    -0x2c(%ebp),%eax
0867ea2f +0x197:  mov    %eax,(%esp)
0867ea32 +0x19a:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0867ea37 +0x19f:  lea    -0x8(%ebp),%esp
0867ea3a +0x1a2:  add    $0x0,%esp
0867ea3d +0x1a5:  pop    %ebx
0867ea3e +0x1a6:  pop    %esi
0867ea3f +0x1a7:  pop    %ebp
0867ea40 +0x1a8:  ret
0867ea41 +0x1a9:  mov    %edx,%ebx
0867ea43 +0x1ab:  mov    %eax,%esi
0867ea45 +0x1ad:  lea    -0x2c(%ebp),%eax
0867ea48 +0x1b0:  mov    %eax,(%esp)
0867ea4b +0x1b3:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0867ea50 +0x1b8:  mov    %esi,%eax
0867ea52 +0x1ba:  mov    %ebx,%edx
0867ea54 +0x1bc:  mov    %eax,(%esp)
0867ea57 +0x1bf:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CUser::deleteGuildExpBook @ 0x867e898

/* CUser::deleteGuildExpBook() */

void __thiscall CUser::deleteGuildExpBook(CUser *this)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_3c [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_30 [12];
  pair<int,int> local_24 [8];
  ENUM_HARDCODE_ITEM local_1c [8];
  undefined4 local_14;
  int local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_30);
                    /* try { // try from 0867e8b1 to 0867e8b5 has its CatchHandler @ 0867ea41 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_3c);
  local_14 = 0;
  local_10 = 0x4b0;
                    /* try { // try from 0867e8d8 to 0867ea02 has its CatchHandler @ 0867ea0a */
  std::make_pair<ENUM_HARDCODE_ITEM,int>(local_1c,&local_10);
  std::pair<int,int>::pair<ENUM_HARDCODE_ITEM,int>(local_24,local_1c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back(local_30,local_24);
  deleteSpecificItem(this,(vector *)local_30,(vector *)local_3c);
  cVar1 = send_itemspace(this,0);
  if (cVar1 == '\x01') {
    cVar1 = send_itemspace(this,2);
    if (cVar1 == '\x01') {
      send_RedeemInfo(this);
    }
    else {
      uVar2 = get_acc_id(this);
      uVar3 = NumberToString(uVar2,0);
      LogManager::logFormat
                (1,"user.cpp","void CUser::deleteGuildExpBook()",0x7c5c,
                 "deleteGuildExpBook, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_CARGO ) return FAILED"
                 ,uVar3);
    }
  }
  else {
    uVar2 = get_acc_id(this);
    uVar3 = NumberToString(uVar2,0);
    LogManager::logFormat
              (1,"user.cpp","void CUser::deleteGuildExpBook()",0x7c57,
               "deleteGuildExpBook, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_INVENTORY ) return FAILED"
               ,uVar3);
  }
                    /* try { // try from 0867ea25 to 0867ea29 has its CatchHandler @ 0867ea41 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_3c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_30);
  return;
}
```
