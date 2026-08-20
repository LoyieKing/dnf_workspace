# getAniInfo

`_ZN17STEquipmentScript10getAniInfoE17ENUM_CHARACTERJOB`

`STEquipmentScript::getAniInfo(ENUM_CHARACTERJOB)`

| 类 | 地址 |
|---|---|
| `STEquipmentScript` | `0x0898ef1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898ef1a  _ZN17STEquipmentScript10getAniInfoE17ENUM_CHARACTERJOB
#           STEquipmentScript::getAniInfo(ENUM_CHARACTERJOB)
# range [0x0898ef1a, 0x0898efa7]
0898ef1a +0x00:  push   %ebp
0898ef1b +0x01:  mov    %esp,%ebp
0898ef1d +0x03:  sub    $0x28,%esp
0898ef20 +0x06:  mov    0x8(%ebp),%eax
0898ef23 +0x09:  lea    0x640(%eax),%ecx
0898ef29 +0x0f:  lea    -0x10(%ebp),%eax
0898ef2c +0x12:  lea    0xc(%ebp),%edx
0898ef2f +0x15:  mov    %edx,0x8(%esp)
0898ef33 +0x19:  mov    %ecx,0x4(%esp)
0898ef37 +0x1d:  mov    %eax,(%esp)
0898ef3a +0x20:  call   089c57f6 <_GLOBAL__I_g_npcNameVector+0x2bd1>  ; global constructors keyed to g_npcNameVector+0x2bd1
0898ef3f +0x25:  sub    $0x4,%esp
0898ef42 +0x28:  mov    0x8(%ebp),%eax
0898ef45 +0x2b:  lea    0x640(%eax),%edx
0898ef4b +0x31:  lea    -0xc(%ebp),%eax
0898ef4e +0x34:  mov    %edx,0x4(%esp)
0898ef52 +0x38:  mov    %eax,(%esp)
0898ef55 +0x3b:  call   089c5822 <_GLOBAL__I_g_npcNameVector+0x2bfd>  ; global constructors keyed to g_npcNameVector+0x2bfd
0898ef5a +0x40:  sub    $0x4,%esp
0898ef5d +0x43:  lea    -0xc(%ebp),%eax
0898ef60 +0x46:  mov    %eax,0x4(%esp)
0898ef64 +0x4a:  lea    -0x10(%ebp),%eax
0898ef67 +0x4d:  mov    %eax,(%esp)
0898ef6a +0x50:  call   089c5848 <_GLOBAL__I_g_npcNameVector+0x2c23>  ; global constructors keyed to g_npcNameVector+0x2c23
0898ef6f +0x55:  test   %al,%al
0898ef71 +0x57:  je     0898ef83 <+0x69>
0898ef73 +0x59:  lea    -0x10(%ebp),%eax
0898ef76 +0x5c:  mov    %eax,(%esp)
0898ef79 +0x5f:  call   089c585c <_GLOBAL__I_g_npcNameVector+0x2c37>  ; global constructors keyed to g_npcNameVector+0x2c37
0898ef7e +0x64:  add    $0x4,%eax
0898ef81 +0x67:  jmp    0898efa5 <+0x8b>
0898ef83 +0x69:  mov    0xc(%ebp),%eax
0898ef86 +0x6c:  cmp    $0xb,%eax
0898ef89 +0x6f:  jne    0898ef92 <+0x78>
0898ef8b +0x71:  mov    $0x0,%eax
0898ef90 +0x76:  jmp    0898efa5 <+0x8b>
0898ef92 +0x78:  movl   $0xb,0x4(%esp)
0898ef9a +0x80:  mov    0x8(%ebp),%eax
0898ef9d +0x83:  mov    %eax,(%esp)
0898efa0 +0x86:  call   0898ef1a <+0x0>
0898efa5 +0x8b:  leave
0898efa6 +0x8c:  ret
0898efa7 +0x8d:  nop
```

## 反编译 C

```c
// STEquipmentScript::getAniInfo @ 0x898ef1a

/* STEquipmentScript::getAniInfo(ENUM_CHARACTERJOB) */

int __thiscall STEquipmentScript::getAniInfo(STEquipmentScript *this,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  _Rb_tree_iterator<std::pair<ENUM_CHARACTERJOB_const,EquipmentAniInfoScript>> local_14 [4];
  map<ENUM_CHARACTERJOB,EquipmentAniInfoScript,std::less<ENUM_CHARACTERJOB>,std::allocator<std::pair<ENUM_CHARACTERJOB_const,EquipmentAniInfoScript>>>
  local_10 [12];
  
  puVar3 = &param_2;
  std::
  map<ENUM_CHARACTERJOB,EquipmentAniInfoScript,std::less<ENUM_CHARACTERJOB>,std::allocator<std::pair<ENUM_CHARACTERJOB_const,EquipmentAniInfoScript>>>
  ::find(local_14);
  std::
  map<ENUM_CHARACTERJOB,EquipmentAniInfoScript,std::less<ENUM_CHARACTERJOB>,std::allocator<std::pair<ENUM_CHARACTERJOB_const,EquipmentAniInfoScript>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<ENUM_CHARACTERJOB_const,EquipmentAniInfoScript>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    if (param_2 == 0xb) {
      iVar2 = 0;
    }
    else {
      iVar2 = getAniInfo(this,0xb,puVar3);
    }
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<ENUM_CHARACTERJOB_const,EquipmentAniInfoScript>>::
            operator*(local_14);
    iVar2 = iVar2 + 4;
  }
  return iVar2;
}
```
