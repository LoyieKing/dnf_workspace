# GetUserUniqueId

`_ZN11pvp_assault10CAssaulter15GetUserUniqueIdEv`

`pvp_assault::CAssaulter::GetUserUniqueId()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaulter` | `0x082e6662` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6662  _ZN11pvp_assault10CAssaulter15GetUserUniqueIdEv
#           pvp_assault::CAssaulter::GetUserUniqueId()
# range [0x082e6662, 0x082e6687]
082e6662 +0x00:  push   %ebp
082e6663 +0x01:  mov    %esp,%ebp
082e6665 +0x03:  sub    $0x18,%esp
082e6668 +0x06:  mov    0x8(%ebp),%eax
082e666b +0x09:  mov    (%eax),%eax
082e666d +0x0b:  test   %eax,%eax
082e666f +0x0d:  jne    082e6678 <+0x16>
082e6671 +0x0f:  mov    $0x0,%eax
082e6676 +0x14:  jmp    082e6685 <+0x23>
082e6678 +0x16:  mov    0x8(%ebp),%eax
082e667b +0x19:  mov    (%eax),%eax
082e667d +0x1b:  mov    %eax,(%esp)
082e6680 +0x1e:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
082e6685 +0x23:  leave
082e6686 +0x24:  ret
082e6687 +0x25:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaulter::GetUserUniqueId @ 0x82e6662

/* pvp_assault::CAssaulter::GetUserUniqueId() */

undefined4 __thiscall pvp_assault::CAssaulter::GetUserUniqueId(CAssaulter *this)

{
  undefined4 uVar1;
  
  if (*(int *)this == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CUser::get_unique_id(*(CUser **)this);
  }
  return uVar1;
}
```
