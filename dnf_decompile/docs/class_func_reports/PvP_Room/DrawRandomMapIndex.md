# DrawRandomMapIndex

`_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE`

`PvP_Room::DrawRandomMapIndex(std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d88ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d88ae  _ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE
#           PvP_Room::DrawRandomMapIndex(std::vector<int, std::allocator<int> >&)
# range [0x085d88ae, 0x085d8b29]
085d88ae +0x000:  push   %ebp
085d88af +0x001:  mov    %esp,%ebp
085d88b1 +0x003:  push   %esi
085d88b2 +0x004:  push   %ebx
085d88b3 +0x005:  sub    $0x60,%esp
085d88b6 +0x008:  movb   $0x0,-0x1d(%ebp)
085d88ba +0x00c:  lea    -0x2c(%ebp),%eax
085d88bd +0x00f:  mov    %eax,(%esp)
085d88c0 +0x012:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085d88c5 +0x017:  lea    -0x30(%ebp),%eax
085d88c8 +0x01a:  mov    0xc(%ebp),%edx
085d88cb +0x01d:  mov    %edx,0x4(%esp)
085d88cf +0x021:  mov    %eax,(%esp)
085d88d2 +0x024:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
085d88d7 +0x029:  sub    $0x4,%esp
085d88da +0x02c:  jmp    085d8945 <+0x97>
085d88dc +0x02e:  lea    -0x30(%ebp),%eax
085d88df +0x031:  mov    %eax,(%esp)
085d88e2 +0x034:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
085d88e7 +0x039:  mov    (%eax),%eax
085d88e9 +0x03b:  lea    -0x1d(%ebp),%edx
085d88ec +0x03e:  mov    %edx,0x4(%esp)
085d88f0 +0x042:  mov    %eax,(%esp)
085d88f3 +0x045:  call   085d4690 <_Z15IsDeathMatchMapiRb>  ; IsDeathMatchMap(int, bool&)
085d88f8 +0x04a:  test   %al,%al
085d88fa +0x04c:  je     085d893a <+0x8c>
085d88fc +0x04e:  lea    -0x30(%ebp),%eax
085d88ff +0x051:  mov    %eax,(%esp)
085d8902 +0x054:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
085d8907 +0x059:  mov    %eax,0x4(%esp)
085d890b +0x05d:  lea    -0x2c(%ebp),%eax
085d890e +0x060:  mov    %eax,(%esp)
085d8911 +0x063:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
085d8916 +0x068:  lea    -0x3c(%ebp),%eax
085d8919 +0x06b:  mov    -0x30(%ebp),%edx
085d891c +0x06e:  mov    %edx,0x8(%esp)
085d8920 +0x072:  mov    0xc(%ebp),%edx
085d8923 +0x075:  mov    %edx,0x4(%esp)
085d8927 +0x079:  mov    %eax,(%esp)
085d892a +0x07c:  call   080ea48e <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xc7>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0xc7
085d892f +0x081:  sub    $0x4,%esp
085d8932 +0x084:  mov    -0x3c(%ebp),%eax
085d8935 +0x087:  mov    %eax,-0x30(%ebp)
085d8938 +0x08a:  jmp    085d8945 <+0x97>
085d893a +0x08c:  lea    -0x30(%ebp),%eax
085d893d +0x08f:  mov    %eax,(%esp)
085d8940 +0x092:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
085d8945 +0x097:  lea    -0x1c(%ebp),%eax
085d8948 +0x09a:  mov    0xc(%ebp),%edx
085d894b +0x09d:  mov    %edx,0x4(%esp)
085d894f +0x0a1:  mov    %eax,(%esp)
085d8952 +0x0a4:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
085d8957 +0x0a9:  sub    $0x4,%esp
085d895a +0x0ac:  lea    -0x1c(%ebp),%eax
085d895d +0x0af:  mov    %eax,0x4(%esp)
085d8961 +0x0b3:  lea    -0x30(%ebp),%eax
085d8964 +0x0b6:  mov    %eax,(%esp)
085d8967 +0x0b9:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
085d896c +0x0be:  test   %al,%al
085d896e +0x0c0:  jne    085d88dc <+0x2e>
085d8974 +0x0c6:  movl   $0x0,-0x18(%ebp)
085d897b +0x0cd:  lea    -0x2c(%ebp),%eax
085d897e +0x0d0:  mov    %eax,(%esp)
085d8981 +0x0d3:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085d8986 +0x0d8:  test   %eax,%eax
085d8988 +0x0da:  jne    085d89a0 <+0xf2>
085d898a +0x0dc:  mov    0xc(%ebp),%eax
085d898d +0x0df:  mov    %eax,(%esp)
085d8990 +0x0e2:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085d8995 +0x0e7:  test   %eax,%eax
085d8997 +0x0e9:  jne    085d89a0 <+0xf2>
085d8999 +0x0eb:  mov    $0x1,%eax
085d899e +0x0f0:  jmp    085d89a5 <+0xf7>
085d89a0 +0x0f2:  mov    $0x0,%eax
085d89a5 +0x0f7:  test   %al,%al
085d89a7 +0x0f9:  je     085d89da <+0x12c>
085d89a9 +0x0fb:  call   0807dca0 <_init+0x598>
085d89ae +0x100:  mov    %eax,%ebx
085d89b0 +0x102:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085d89b5 +0x107:  mov    0x4(%eax),%eax
085d89b8 +0x10a:  mov    %eax,(%esp)
085d89bb +0x10d:  call   085df796 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1d
085d89c0 +0x112:  mov    %eax,-0x50(%ebp)
085d89c3 +0x115:  mov    %ebx,%edx
085d89c5 +0x117:  mov    %edx,%eax
085d89c7 +0x119:  sar    $0x1f,%edx
085d89ca +0x11c:  idivl  -0x50(%ebp)
085d89cd +0x11f:  mov    %edx,%eax
085d89cf +0x121:  add    $0x1,%eax
085d89d2 +0x124:  mov    %eax,-0x18(%ebp)
085d89d5 +0x127:  jmp    085d8af4 <+0x246>
085d89da +0x12c:  lea    -0x2c(%ebp),%eax
085d89dd +0x12f:  mov    %eax,(%esp)
085d89e0 +0x132:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085d89e5 +0x137:  test   %eax,%eax
085d89e7 +0x139:  jne    085d89ff <+0x151>
085d89e9 +0x13b:  mov    0xc(%ebp),%eax
085d89ec +0x13e:  mov    %eax,(%esp)
085d89ef +0x141:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085d89f4 +0x146:  test   %eax,%eax
085d89f6 +0x148:  je     085d89ff <+0x151>
085d89f8 +0x14a:  mov    $0x1,%eax
085d89fd +0x14f:  jmp    085d8a04 <+0x156>
085d89ff +0x151:  mov    $0x0,%eax
085d8a04 +0x156:  test   %al,%al
085d8a06 +0x158:  je     085d8a4a <+0x19c>
085d8a08 +0x15a:  call   0807dca0 <_init+0x598>
085d8a0d +0x15f:  mov    %eax,%ebx
085d8a0f +0x161:  mov    0xc(%ebp),%eax
085d8a12 +0x164:  mov    %eax,(%esp)
085d8a15 +0x167:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085d8a1a +0x16c:  mov    %eax,-0x4c(%ebp)
085d8a1d +0x16f:  mov    %ebx,%eax
085d8a1f +0x171:  mov    $0x0,%edx
085d8a24 +0x176:  divl   -0x4c(%ebp)
085d8a27 +0x179:  mov    %edx,%ecx
085d8a29 +0x17b:  mov    %ecx,%eax
085d8a2b +0x17d:  mov    %eax,-0x14(%ebp)
085d8a2e +0x180:  mov    -0x14(%ebp),%eax
085d8a31 +0x183:  mov    %eax,0x4(%esp)
085d8a35 +0x187:  mov    0xc(%ebp),%eax
085d8a38 +0x18a:  mov    %eax,(%esp)
085d8a3b +0x18d:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
085d8a40 +0x192:  mov    (%eax),%eax
085d8a42 +0x194:  mov    %eax,-0x18(%ebp)
085d8a45 +0x197:  jmp    085d8af4 <+0x246>
085d8a4a +0x19c:  mov    0xc(%ebp),%eax
085d8a4d +0x19f:  mov    %eax,(%esp)
085d8a50 +0x1a2:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085d8a55 +0x1a7:  test   %eax,%eax
085d8a57 +0x1a9:  jne    085d8a6f <+0x1c1>
085d8a59 +0x1ab:  lea    -0x2c(%ebp),%eax
085d8a5c +0x1ae:  mov    %eax,(%esp)
085d8a5f +0x1b1:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085d8a64 +0x1b6:  test   %eax,%eax
085d8a66 +0x1b8:  je     085d8a6f <+0x1c1>
085d8a68 +0x1ba:  mov    $0x1,%eax
085d8a6d +0x1bf:  jmp    085d8a74 <+0x1c6>
085d8a6f +0x1c1:  mov    $0x0,%eax
085d8a74 +0x1c6:  test   %al,%al
085d8a76 +0x1c8:  je     085d8ab7 <+0x209>
085d8a78 +0x1ca:  call   0807dca0 <_init+0x598>
085d8a7d +0x1cf:  mov    %eax,%ebx
085d8a7f +0x1d1:  lea    -0x2c(%ebp),%eax
085d8a82 +0x1d4:  mov    %eax,(%esp)
085d8a85 +0x1d7:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085d8a8a +0x1dc:  mov    %eax,-0x4c(%ebp)
085d8a8d +0x1df:  mov    %ebx,%eax
085d8a8f +0x1e1:  mov    $0x0,%edx
085d8a94 +0x1e6:  divl   -0x4c(%ebp)
085d8a97 +0x1e9:  mov    %edx,%ecx
085d8a99 +0x1eb:  mov    %ecx,%eax
085d8a9b +0x1ed:  mov    %eax,-0x10(%ebp)
085d8a9e +0x1f0:  mov    -0x10(%ebp),%eax
085d8aa1 +0x1f3:  mov    %eax,0x4(%esp)
085d8aa5 +0x1f7:  lea    -0x2c(%ebp),%eax
085d8aa8 +0x1fa:  mov    %eax,(%esp)
085d8aab +0x1fd:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
085d8ab0 +0x202:  mov    (%eax),%eax
085d8ab2 +0x204:  mov    %eax,-0x18(%ebp)
085d8ab5 +0x207:  jmp    085d8af4 <+0x246>
085d8ab7 +0x209:  call   0807dca0 <_init+0x598>
085d8abc +0x20e:  mov    %eax,%ebx
085d8abe +0x210:  mov    0xc(%ebp),%eax
085d8ac1 +0x213:  mov    %eax,(%esp)
085d8ac4 +0x216:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085d8ac9 +0x21b:  mov    %eax,-0x4c(%ebp)
085d8acc +0x21e:  mov    %ebx,%eax
085d8ace +0x220:  mov    $0x0,%edx
085d8ad3 +0x225:  divl   -0x4c(%ebp)
085d8ad6 +0x228:  mov    %edx,%ecx
085d8ad8 +0x22a:  mov    %ecx,%eax
085d8ada +0x22c:  mov    %eax,-0xc(%ebp)
085d8add +0x22f:  mov    -0xc(%ebp),%eax
085d8ae0 +0x232:  mov    %eax,0x4(%esp)
085d8ae4 +0x236:  mov    0xc(%ebp),%eax
085d8ae7 +0x239:  mov    %eax,(%esp)
085d8aea +0x23c:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
085d8aef +0x241:  mov    (%eax),%eax
085d8af1 +0x243:  mov    %eax,-0x18(%ebp)
085d8af4 +0x246:  mov    -0x18(%ebp),%ebx
085d8af7 +0x249:  lea    -0x2c(%ebp),%eax
085d8afa +0x24c:  mov    %eax,(%esp)
085d8afd +0x24f:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085d8b02 +0x254:  mov    %ebx,%eax
085d8b04 +0x256:  lea    -0x8(%ebp),%esp
085d8b07 +0x259:  add    $0x0,%esp
085d8b0a +0x25c:  pop    %ebx
085d8b0b +0x25d:  pop    %esi
085d8b0c +0x25e:  pop    %ebp
085d8b0d +0x25f:  ret
085d8b0e +0x260:  mov    %edx,%ebx
085d8b10 +0x262:  mov    %eax,%esi
085d8b12 +0x264:  lea    -0x2c(%ebp),%eax
085d8b15 +0x267:  mov    %eax,(%esp)
085d8b18 +0x26a:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085d8b1d +0x26f:  mov    %esi,%eax
085d8b1f +0x271:  mov    %ebx,%edx
085d8b21 +0x273:  mov    %eax,(%esp)
085d8b24 +0x276:  call   08ae3750 <_Unwind_Resume>
085d8b29 +0x27b:  nop
```

## 反编译 C

```c
// PvP_Room::DrawRandomMapIndex @ 0x85d88ae

/* PvP_Room::DrawRandomMapIndex(std::vector<int, std::allocator<int> >&) */

int __thiscall PvP_Room::DrawRandomMapIndex(PvP_Room *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 local_40 [3];
  undefined4 local_34;
  vector<int,std::allocator<int>> local_30 [15];
  bool local_21;
  __normal_iterator local_20 [4];
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_21 = false;
  std::vector<int,std::allocator<int>>::vector(local_30);
                    /* try { // try from 085d88d2 to 085d89b4 has its CatchHandler @ 085d8b0e */
  std::vector<int,std::allocator<int>>::begin();
  while( true ) {
    std::vector<int,std::allocator<int>>::end();
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_34,local_20);
    if (!bVar2) break;
    piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_34);
    cVar1 = IsDeathMatchMap(*piVar6,&local_21);
    if (cVar1 == '\0') {
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_34);
    }
    else {
      piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                &local_34);
      std::vector<int,std::allocator<int>>::push_back(local_30,piVar6);
      std::vector<int,std::allocator<int>>::erase(local_40,param_1,local_34);
      local_34 = local_40[0];
    }
  }
  local_1c = 0;
  iVar3 = std::vector<int,std::allocator<int>>::size(local_30);
  if (iVar3 == 0) {
    iVar3 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_1);
    if (iVar3 != 0) goto LAB_085d89a0;
    bVar2 = true;
  }
  else {
LAB_085d89a0:
    bVar2 = false;
  }
  if (bVar2) {
    iVar3 = rand();
    iVar4 = G_CDataManager();
    iVar4 = CMapList::GetPVPMapCount(*(CMapList **)(iVar4 + 4));
    local_1c = iVar3 % iVar4 + 1;
    goto LAB_085d8af4;
  }
  iVar3 = std::vector<int,std::allocator<int>>::size(local_30);
  if (iVar3 == 0) {
    iVar3 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_1);
    if (iVar3 == 0) goto LAB_085d89ff;
    bVar2 = true;
  }
  else {
LAB_085d89ff:
    bVar2 = false;
  }
  if (bVar2) {
    uVar5 = rand();
    local_18 = std::vector<int,std::allocator<int>>::size
                         ((vector<int,std::allocator<int>> *)param_1);
    local_18 = uVar5 % local_18;
    piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)param_1,local_18);
    local_1c = *piVar6;
    goto LAB_085d8af4;
  }
  iVar3 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_1);
  if (iVar3 == 0) {
    iVar3 = std::vector<int,std::allocator<int>>::size(local_30);
    if (iVar3 == 0) goto LAB_085d8a6f;
    bVar2 = true;
  }
  else {
LAB_085d8a6f:
    bVar2 = false;
  }
  if (bVar2) {
    uVar5 = rand();
    local_14 = std::vector<int,std::allocator<int>>::size(local_30);
    local_14 = uVar5 % local_14;
    piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[](local_30,local_14);
    local_1c = *piVar6;
  }
  else {
    uVar5 = rand();
    local_10 = std::vector<int,std::allocator<int>>::size
                         ((vector<int,std::allocator<int>> *)param_1);
    local_10 = uVar5 % local_10;
    piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)param_1,local_10);
    local_1c = *piVar6;
  }
LAB_085d8af4:
  iVar3 = local_1c;
  std::vector<int,std::allocator<int>>::~vector(local_30);
  return iVar3;
}
```
