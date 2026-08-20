# GetUserList

`_ZN8fair_pvp10CFairMatch11GetUserListEPv`

`fair_pvp::CFairMatch::GetUserList(void*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08565184` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08565184  _ZN8fair_pvp10CFairMatch11GetUserListEPv
#           fair_pvp::CFairMatch::GetUserList(void*)
# range [0x08565184, 0x085651a5]
08565184 +0x00:  push   %ebp
08565185 +0x01:  mov    %esp,%ebp
08565187 +0x03:  push   %edi
08565188 +0x04:  push   %esi
08565189 +0x05:  push   %ebx
0856518a +0x06:  mov    0xc(%ebp),%edx
0856518d +0x09:  mov    0x8(%ebp),%eax
08565190 +0x0c:  lea    0x1c(%eax),%ebx
08565193 +0x0f:  mov    $0x12,%eax
08565198 +0x14:  mov    %edx,%edi
0856519a +0x16:  mov    %ebx,%esi
0856519c +0x18:  mov    %eax,%ecx
0856519e +0x1a:  rep movsl %ds:(%esi),%es:(%edi)
085651a0 +0x1c:  pop    %ebx
085651a1 +0x1d:  pop    %esi
085651a2 +0x1e:  pop    %edi
085651a3 +0x1f:  pop    %ebp
085651a4 +0x20:  ret
085651a5 +0x21:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::GetUserList @ 0x8565184

/* fair_pvp::CFairMatch::GetUserList(void*) */

void __thiscall fair_pvp::CFairMatch::GetUserList(CFairMatch *this,void *param_1)

{
  int iVar1;
  CFairMatch *pCVar2;
  
  pCVar2 = this + 0x1c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    param_1 = (undefined4 *)((int)param_1 + 4);
  }
  return;
}
```
