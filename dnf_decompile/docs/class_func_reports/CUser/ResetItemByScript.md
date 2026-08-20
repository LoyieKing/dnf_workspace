# ResetItemByScript

`_ZN5CUser17ResetItemByScriptERSt6vectorISt4pairIiiESaIS2_EE`

`CUser::ResetItemByScript(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08689010` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08689010  _ZN5CUser17ResetItemByScriptERSt6vectorISt4pairIiiESaIS2_EE
#           CUser::ResetItemByScript(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x08689010, 0x086890bd]
08689010 +0x00:  push   %ebp
08689011 +0x01:  mov    %esp,%ebp
08689013 +0x03:  sub    $0x38,%esp
08689016 +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868901b +0x0b:  mov    %eax,(%esp)
0868901e +0x0e:  call   08693f24 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x779>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x779
08689023 +0x13:  mov    %eax,-0x14(%ebp)
08689026 +0x16:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0868902d +0x1d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08689032 +0x22:  mov    %eax,-0x10(%ebp)
08689035 +0x25:  movl   $0x0,-0xc(%ebp)
0868903c +0x2c:  jmp    086890a7 <+0x97>
0868903e +0x2e:  mov    -0x14(%ebp),%eax
08689041 +0x31:  mov    -0xc(%ebp),%edx
08689044 +0x34:  mov    %edx,0x4(%esp)
08689048 +0x38:  mov    %eax,(%esp)
0868904b +0x3b:  call   0869c776 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8fcb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8fcb
08689050 +0x40:  mov    0x4(%eax),%eax
08689053 +0x43:  cmp    -0x10(%ebp),%eax
08689056 +0x46:  setle  %al
08689059 +0x49:  test   %al,%al
0868905b +0x4b:  je     086890a3 <+0x93>
0868905d +0x4d:  movl   $0x0,-0x18(%ebp)
08689064 +0x54:  mov    -0x14(%ebp),%eax
08689067 +0x57:  mov    -0xc(%ebp),%edx
0868906a +0x5a:  mov    %edx,0x4(%esp)
0868906e +0x5e:  mov    %eax,(%esp)
08689071 +0x61:  call   0869c776 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8fcb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8fcb
08689076 +0x66:  mov    %eax,%edx
08689078 +0x68:  lea    -0x20(%ebp),%eax
0868907b +0x6b:  lea    -0x18(%ebp),%ecx
0868907e +0x6e:  mov    %ecx,0x8(%esp)
08689082 +0x72:  mov    %edx,0x4(%esp)
08689086 +0x76:  mov    %eax,(%esp)
08689089 +0x79:  call   08135ba6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17ad>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17ad
0868908e +0x7e:  sub    $0x4,%esp
08689091 +0x81:  lea    -0x20(%ebp),%eax
08689094 +0x84:  mov    %eax,0x4(%esp)
08689098 +0x88:  mov    0xc(%ebp),%eax
0868909b +0x8b:  mov    %eax,(%esp)
0868909e +0x8e:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
086890a3 +0x93:  addl   $0x1,-0xc(%ebp)
086890a7 +0x97:  mov    -0x14(%ebp),%eax
086890aa +0x9a:  mov    %eax,(%esp)
086890ad +0x9d:  call   0869c75a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8faf>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8faf
086890b2 +0xa2:  cmp    -0xc(%ebp),%eax
086890b5 +0xa5:  seta   %al
086890b8 +0xa8:  test   %al,%al
086890ba +0xaa:  jne    0868903e <+0x2e>
086890bc +0xac:  leave
086890bd +0xad:  ret
```

## 反编译 C

```c
// CUser::ResetItemByScript @ 0x8689010

/* CUser::ResetItemByScript(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> >
   >&) */

void __thiscall CUser::ResetItemByScript(CUser *this,vector *param_1)

{
  CDataManager *this_00;
  int iVar1;
  int *piVar2;
  uint uVar3;
  int local_24 [2];
  undefined4 local_1c;
  vector<stResetItemInfo::ResetItem,std::allocator<stResetItemInfo::ResetItem>> *local_18;
  int local_14;
  uint local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_18 = (vector<stResetItemInfo::ResetItem,std::allocator<stResetItemInfo::ResetItem>> *)
             CDataManager::GetResetItemInfo(this_00);
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<stResetItemInfo::ResetItem,std::allocator<stResetItemInfo::ResetItem>>::size
                      (local_18);
    if (uVar3 <= local_10) break;
    iVar1 = std::vector<stResetItemInfo::ResetItem,std::allocator<stResetItemInfo::ResetItem>>::
            operator[](local_18,local_10);
    if (*(int *)(iVar1 + 4) <= local_14) {
      local_1c = 0;
      piVar2 = (int *)std::
                      vector<stResetItemInfo::ResetItem,std::allocator<stResetItemInfo::ResetItem>>
                      ::operator[](local_18,local_10);
      std::make_pair<int_const&,int>(local_24,piVar2);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,
                 (pair *)local_24);
    }
    local_10 = local_10 + 1;
  }
  return;
}
```
