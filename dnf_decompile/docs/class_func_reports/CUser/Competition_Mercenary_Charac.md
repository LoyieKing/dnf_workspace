# Competition_Mercenary_Charac

`_ZN5CUser28Competition_Mercenary_CharacEjcc`

`CUser::Competition_Mercenary_Charac(unsigned int, char, char)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868e6c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868e6c0  _ZN5CUser28Competition_Mercenary_CharacEjcc
#           CUser::Competition_Mercenary_Charac(unsigned int, char, char)
# range [0x0868e6c0, 0x0868e703]
0868e6c0 +0x00:  push   %ebp
0868e6c1 +0x01:  mov    %esp,%ebp
0868e6c3 +0x03:  sub    $0x38,%esp
0868e6c6 +0x06:  mov    0x10(%ebp),%edx
0868e6c9 +0x09:  mov    0x14(%ebp),%eax
0868e6cc +0x0c:  mov    %dl,-0xc(%ebp)
0868e6cf +0x0f:  mov    %al,-0x10(%ebp)
0868e6d2 +0x12:  movsbl -0x10(%ebp),%edx
0868e6d6 +0x16:  movsbl -0xc(%ebp),%eax
0868e6da +0x1a:  mov    0x8(%ebp),%ecx
0868e6dd +0x1d:  add    $0x6ef6c,%ecx
0868e6e3 +0x23:  mov    %edx,0x10(%esp)
0868e6e7 +0x27:  mov    %eax,0xc(%esp)
0868e6eb +0x2b:  mov    0xc(%ebp),%eax
0868e6ee +0x2e:  mov    %eax,0x8(%esp)
0868e6f2 +0x32:  mov    0x8(%ebp),%eax
0868e6f5 +0x35:  mov    %eax,0x4(%esp)
0868e6f9 +0x39:  mov    %ecx,(%esp)
0868e6fc +0x3c:  call   081b4536 <_ZN20UserMercenaryInfoMgr17CompetitionCharacEP5CUserjcc>  ; UserMercenaryInfoMgr::CompetitionCharac(CUser*, unsigned int, char, char)
0868e701 +0x41:  leave
0868e702 +0x42:  ret
0868e703 +0x43:  nop
```

## 反编译 C

```c
// CUser::Competition_Mercenary_Charac @ 0x868e6c0

/* CUser::Competition_Mercenary_Charac(unsigned int, char, char) */

void __thiscall
CUser::Competition_Mercenary_Charac(CUser *this,uint param_1,char param_2,char param_3)

{
  UserMercenaryInfoMgr::CompetitionCharac
            ((UserMercenaryInfoMgr *)(this + 0x6ef6c),this,param_1,param_2,param_3);
  return;
}
```
