# isUsable

`_ZNK24ChattingEmoticon_byLevel8isUsableERK5CUser`

`ChattingEmoticon_byLevel::isUsable(CUser const&) const`

| 类 | 地址 |
|---|---|
| `ChattingEmoticon_byLevel` | `0x080e5e4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e5e4e  _ZNK24ChattingEmoticon_byLevel8isUsableERK5CUser
#           ChattingEmoticon_byLevel::isUsable(CUser const&) const
# range [0x080e5e4e, 0x080e5e6b]
080e5e4e +0x00:  push   %ebp
080e5e4f +0x01:  mov    %esp,%ebp
080e5e51 +0x03:  sub    $0x18,%esp
080e5e54 +0x06:  mov    0xc(%ebp),%eax
080e5e57 +0x09:  mov    %eax,(%esp)
080e5e5a +0x0c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
080e5e5f +0x11:  mov    0x8(%ebp),%edx
080e5e62 +0x14:  mov    0x20(%edx),%edx
080e5e65 +0x17:  cmp    %edx,%eax
080e5e67 +0x19:  setge  %al
080e5e6a +0x1c:  leave
080e5e6b +0x1d:  ret
```

## 反编译 C

```c
// ChattingEmoticon_byLevel::isUsable @ 0x80e5e4e

/* ChattingEmoticon_byLevel::isUsable(CUser const&) const */

bool __thiscall ChattingEmoticon_byLevel::isUsable(ChattingEmoticon_byLevel *this,CUser *param_1)

{
  int iVar1;
  
  iVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  return *(int *)(this + 0x20) <= iVar1;
}
```
