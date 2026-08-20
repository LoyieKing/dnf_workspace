# SetBingoData

`_ZN5CUser12SetBingoDataER14SIG_LOGIN_DATA`

`CUser::SetBingoData(SIG_LOGIN_DATA&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0869126e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0869126e  _ZN5CUser12SetBingoDataER14SIG_LOGIN_DATA
#           CUser::SetBingoData(SIG_LOGIN_DATA&)
# range [0x0869126e, 0x086912af]
0869126e +0x00:  push   %ebp
0869126f +0x01:  mov    %esp,%ebp
08691271 +0x03:  sub    $0x18,%esp
08691274 +0x06:  mov    0x8(%ebp),%eax
08691277 +0x09:  add    $0x8ebdc,%eax
0869127c +0x0e:  mov    %eax,(%esp)
0869127f +0x11:  call   080cbc6c <_GLOBAL__I__ZN10BingoEventC2Ev+0xab9>  ; global constructors keyed to BingoEvent::BingoEvent()+0xab9
08691284 +0x16:  mov    0xc(%ebp),%eax
08691287 +0x19:  mov    0x413c(%eax),%edx
0869128d +0x1f:  mov    0x8(%ebp),%eax
08691290 +0x22:  mov    %edx,0x8ebdc(%eax)
08691296 +0x28:  mov    0xc(%ebp),%eax
08691299 +0x2b:  movzbl 0x4138(%eax),%eax
086912a0 +0x32:  test   %al,%al
086912a2 +0x34:  setne  %dl
086912a5 +0x37:  mov    0x8(%ebp),%eax
086912a8 +0x3a:  mov    %dl,0x8ebe1(%eax)
086912ae +0x40:  leave
086912af +0x41:  ret
```

## 反编译 C

```c
// CUser::SetBingoData @ 0x869126e

/* CUser::SetBingoData(SIG_LOGIN_DATA&) */

void __thiscall CUser::SetBingoData(CUser *this,SIG_LOGIN_DATA *param_1)

{
  BingoData::clear((BingoData *)(this + 0x8ebdc));
  *(undefined4 *)(this + 0x8ebdc) = *(undefined4 *)(param_1 + 0x413c);
  this[0x8ebe1] = (CUser)(param_1[0x4138] != (SIG_LOGIN_DATA)0x0);
  return;
}
```
