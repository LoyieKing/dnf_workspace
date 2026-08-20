# SelectRandomMap

`_ZN8PvP_Room15SelectRandomMapEv`

`PvP_Room::SelectRandomMap()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d8bbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d8bbc  _ZN8PvP_Room15SelectRandomMapEv
#           PvP_Room::SelectRandomMap()
# range [0x085d8bbc, 0x085d8c35]
085d8bbc +0x00:  push   %ebp
085d8bbd +0x01:  mov    %esp,%ebp
085d8bbf +0x03:  push   %esi
085d8bc0 +0x04:  push   %ebx
085d8bc1 +0x05:  sub    $0x20,%esp
085d8bc4 +0x08:  lea    -0x18(%ebp),%eax
085d8bc7 +0x0b:  mov    %eax,(%esp)
085d8bca +0x0e:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085d8bcf +0x13:  lea    -0x18(%ebp),%eax
085d8bd2 +0x16:  mov    %eax,0x4(%esp)
085d8bd6 +0x1a:  mov    0x8(%ebp),%eax
085d8bd9 +0x1d:  mov    %eax,(%esp)
085d8bdc +0x20:  call   085d87be <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE>  ; PvP_Room::GetCandidateMapIndexList(std::vector<int, std::allocator<int> >&)
085d8be1 +0x25:  lea    -0x18(%ebp),%eax
085d8be4 +0x28:  mov    %eax,0x4(%esp)
085d8be8 +0x2c:  mov    0x8(%ebp),%eax
085d8beb +0x2f:  mov    %eax,(%esp)
085d8bee +0x32:  call   085d88ae <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE>  ; PvP_Room::DrawRandomMapIndex(std::vector<int, std::allocator<int> >&)
085d8bf3 +0x37:  mov    %eax,-0xc(%ebp)
085d8bf6 +0x3a:  mov    -0xc(%ebp),%eax
085d8bf9 +0x3d:  mov    %eax,0x4(%esp)
085d8bfd +0x41:  mov    0x8(%ebp),%eax
085d8c00 +0x44:  mov    %eax,(%esp)
085d8c03 +0x47:  call   085d8b2a <_ZN8PvP_Room13ChangePvPModeEi>  ; PvP_Room::ChangePvPMode(int)
085d8c08 +0x4c:  mov    -0xc(%ebp),%ebx
085d8c0b +0x4f:  lea    -0x18(%ebp),%eax
085d8c0e +0x52:  mov    %eax,(%esp)
085d8c11 +0x55:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085d8c16 +0x5a:  mov    %ebx,%eax
085d8c18 +0x5c:  add    $0x20,%esp
085d8c1b +0x5f:  pop    %ebx
085d8c1c +0x60:  pop    %esi
085d8c1d +0x61:  pop    %ebp
085d8c1e +0x62:  ret
085d8c1f +0x63:  mov    %edx,%ebx
085d8c21 +0x65:  mov    %eax,%esi
085d8c23 +0x67:  lea    -0x18(%ebp),%eax
085d8c26 +0x6a:  mov    %eax,(%esp)
085d8c29 +0x6d:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085d8c2e +0x72:  mov    %esi,%eax
085d8c30 +0x74:  mov    %ebx,%edx
085d8c32 +0x76:  mov    %eax,(%esp)
085d8c35 +0x79:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// PvP_Room::SelectRandomMap @ 0x85d8bbc

/* PvP_Room::SelectRandomMap() */

int __thiscall PvP_Room::SelectRandomMap(PvP_Room *this)

{
  int iVar1;
  vector<int,std::allocator<int>> local_1c [12];
  int local_10;
  
  std::vector<int,std::allocator<int>>::vector(local_1c);
                    /* try { // try from 085d8bdc to 085d8c07 has its CatchHandler @ 085d8c1f */
  GetCandidateMapIndexList(this,(vector *)local_1c);
  local_10 = DrawRandomMapIndex(this,(vector *)local_1c);
  ChangePvPMode(this,local_10);
  iVar1 = local_10;
  std::vector<int,std::allocator<int>>::~vector(local_1c);
  return iVar1;
}
```
