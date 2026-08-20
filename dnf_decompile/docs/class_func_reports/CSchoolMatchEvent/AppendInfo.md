# AppendInfo

`_ZN17CSchoolMatchEvent10AppendInfoER11PacketGuard`

`CSchoolMatchEvent::AppendInfo(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `CSchoolMatchEvent` | `0x082742a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082742a8  _ZN17CSchoolMatchEvent10AppendInfoER11PacketGuard
#           CSchoolMatchEvent::AppendInfo(PacketGuard&)
# range [0x082742a8, 0x08274343]
082742a8 +0x00:  push   %ebp
082742a9 +0x01:  mov    %esp,%ebp
082742ab +0x03:  sub    $0x28,%esp
082742ae +0x06:  mov    0x8(%ebp),%eax
082742b1 +0x09:  add    $0xc,%eax
082742b4 +0x0c:  mov    %eax,(%esp)
082742b7 +0x0f:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
082742bc +0x14:  mov    %eax,%edx
082742be +0x16:  mov    0xc(%ebp),%eax
082742c1 +0x19:  mov    %edx,0x4(%esp)
082742c5 +0x1d:  mov    %eax,(%esp)
082742c8 +0x20:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082742cd +0x25:  mov    0x8(%ebp),%eax
082742d0 +0x28:  lea    0xc(%eax),%edx
082742d3 +0x2b:  lea    -0x14(%ebp),%eax
082742d6 +0x2e:  mov    %edx,0x4(%esp)
082742da +0x32:  mov    %eax,(%esp)
082742dd +0x35:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
082742e2 +0x3a:  sub    $0x4,%esp
082742e5 +0x3d:  jmp    08274314 <+0x6c>
082742e7 +0x3f:  lea    -0x14(%ebp),%eax
082742ea +0x42:  mov    %eax,(%esp)
082742ed +0x45:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
082742f2 +0x4a:  mov    (%eax),%eax
082742f4 +0x4c:  mov    %eax,-0xc(%ebp)
082742f7 +0x4f:  mov    0xc(%ebp),%eax
082742fa +0x52:  mov    -0xc(%ebp),%edx
082742fd +0x55:  mov    %edx,0x4(%esp)
08274301 +0x59:  mov    %eax,(%esp)
08274304 +0x5c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08274309 +0x61:  lea    -0x14(%ebp),%eax
0827430c +0x64:  mov    %eax,(%esp)
0827430f +0x67:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
08274314 +0x6c:  mov    0x8(%ebp),%eax
08274317 +0x6f:  lea    0xc(%eax),%edx
0827431a +0x72:  lea    -0x10(%ebp),%eax
0827431d +0x75:  mov    %edx,0x4(%esp)
08274321 +0x79:  mov    %eax,(%esp)
08274324 +0x7c:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08274329 +0x81:  sub    $0x4,%esp
0827432c +0x84:  lea    -0x10(%ebp),%eax
0827432f +0x87:  mov    %eax,0x4(%esp)
08274333 +0x8b:  lea    -0x14(%ebp),%eax
08274336 +0x8e:  mov    %eax,(%esp)
08274339 +0x91:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0827433e +0x96:  test   %al,%al
08274340 +0x98:  jne    082742e7 <+0x3f>
08274342 +0x9a:  leave
08274343 +0x9b:  ret
```

## 反编译 C

```c
// CSchoolMatchEvent::AppendInfo @ 0x82742a8

/* CSchoolMatchEvent::AppendInfo(PacketGuard&) */

void __thiscall CSchoolMatchEvent::AppendInfo(CSchoolMatchEvent *this,PacketGuard *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [4];
  __normal_iterator local_14 [4];
  int local_10;
  
  iVar2 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(this + 0xc));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar2);
  std::vector<int,std::allocator<int>>::begin();
  while( true ) {
    std::vector<int,std::allocator<int>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) break;
    piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*(local_18);
    local_10 = *piVar3;
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,local_10);
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++(local_18);
  }
  return;
}
```
