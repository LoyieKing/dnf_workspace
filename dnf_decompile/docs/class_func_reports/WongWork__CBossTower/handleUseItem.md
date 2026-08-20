# handleUseItem

`_ZN8WongWork10CBossTower13handleUseItemEP5CUsermh`

`WongWork::CBossTower::handleUseItem(CUser*, unsigned long, unsigned char)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x081454b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081454b8  _ZN8WongWork10CBossTower13handleUseItemEP5CUsermh
#           WongWork::CBossTower::handleUseItem(CUser*, unsigned long, unsigned char)
# range [0x081454b8, 0x0814553c]
081454b8 +0x00:  push   %ebp
081454b9 +0x01:  mov    %esp,%ebp
081454bb +0x03:  sub    $0x38,%esp
081454be +0x06:  mov    0x14(%ebp),%eax
081454c1 +0x09:  mov    %al,-0x1c(%ebp)
081454c4 +0x0c:  mov    0x8(%ebp),%eax
081454c7 +0x0f:  mov    0x4(%eax),%eax
081454ca +0x12:  mov    0xc(%ebp),%edx
081454cd +0x15:  mov    %edx,0x4(%esp)
081454d1 +0x19:  mov    %eax,(%esp)
081454d4 +0x1c:  call   0859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>  ; CParty::GetMemberSlotNo(CUser const*) const
081454d9 +0x21:  mov    %eax,-0xc(%ebp)
081454dc +0x24:  cmpl   $0xffffffff,-0xc(%ebp)
081454e0 +0x28:  jne    081454e9 <+0x31>
081454e2 +0x2a:  mov    $0x0,%eax
081454e7 +0x2f:  jmp    0814553b <+0x83>
081454e9 +0x31:  cmpl   $0xbdd,0x10(%ebp)
081454f0 +0x38:  jne    08145511 <+0x59>
081454f2 +0x3a:  mov    -0xc(%ebp),%eax
081454f5 +0x3d:  mov    0x8(%ebp),%edx
081454f8 +0x40:  lea    0x270(%eax),%ecx
081454fe +0x46:  mov    0x8(%edx,%ecx,4),%edx
08145502 +0x4a:  lea    0x1(%edx),%ecx
08145505 +0x4d:  mov    0x8(%ebp),%edx
08145508 +0x50:  add    $0x270,%eax
0814550d +0x55:  mov    %ecx,0x8(%edx,%eax,4)
08145511 +0x59:  cmpb   $0x2,-0x1c(%ebp)
08145515 +0x5d:  jne    08145536 <+0x7e>
08145517 +0x5f:  mov    -0xc(%ebp),%eax
0814551a +0x62:  mov    0x8(%ebp),%edx
0814551d +0x65:  lea    0x274(%eax),%ecx
08145523 +0x6b:  mov    0x8(%edx,%ecx,4),%edx
08145527 +0x6f:  lea    0x1(%edx),%ecx
0814552a +0x72:  mov    0x8(%ebp),%edx
0814552d +0x75:  add    $0x274,%eax
08145532 +0x7a:  mov    %ecx,0x8(%edx,%eax,4)
08145536 +0x7e:  mov    $0x1,%eax
0814553b +0x83:  leave
0814553c +0x84:  ret
```

## 反编译 C

```c
// WongWork::CBossTower::handleUseItem @ 0x81454b8

/* WongWork::CBossTower::handleUseItem(CUser*, unsigned long, unsigned char) */

undefined4 __thiscall
WongWork::CBossTower::handleUseItem(CBossTower *this,CUser *param_1,ulong param_2,uchar param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CParty::GetMemberSlotNo(*(CParty **)(this + 4),param_1);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    if (param_2 == 0xbdd) {
      *(int *)(this + (iVar1 + 0x270) * 4 + 8) = *(int *)(this + (iVar1 + 0x270) * 4 + 8) + 1;
    }
    if (param_3 == '\x02') {
      *(int *)(this + (iVar1 + 0x274) * 4 + 8) = *(int *)(this + (iVar1 + 0x274) * 4 + 8) + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}
```
