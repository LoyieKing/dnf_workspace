# getData

`_ZNK19CCharacBloodDungeon7getDataEPc`

`CCharacBloodDungeon::getData(char*) const`

| 类 | 地址 |
|---|---|
| `CCharacBloodDungeon` | `0x0832a53a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832a53a  _ZNK19CCharacBloodDungeon7getDataEPc
#           CCharacBloodDungeon::getData(char*) const
# range [0x0832a53a, 0x0832a5b5]
0832a53a +0x00:  push   %ebp
0832a53b +0x01:  mov    %esp,%ebp
0832a53d +0x03:  sub    $0x10,%esp
0832a540 +0x06:  mov    0xc(%ebp),%eax
0832a543 +0x09:  mov    %eax,-0x4(%ebp)
0832a546 +0x0c:  mov    0x8(%ebp),%eax
0832a549 +0x0f:  mov    0x8(%eax),%edx
0832a54c +0x12:  mov    -0x4(%ebp),%eax
0832a54f +0x15:  mov    %edx,0x4(%eax)
0832a552 +0x18:  mov    0x8(%ebp),%eax
0832a555 +0x1b:  mov    0xc(%eax),%edx
0832a558 +0x1e:  mov    -0x4(%ebp),%eax
0832a55b +0x21:  mov    %edx,0x8(%eax)
0832a55e +0x24:  mov    0x8(%ebp),%eax
0832a561 +0x27:  mov    0x10(%eax),%edx
0832a564 +0x2a:  mov    -0x4(%ebp),%eax
0832a567 +0x2d:  mov    %edx,0xc(%eax)
0832a56a +0x30:  mov    0x8(%ebp),%eax
0832a56d +0x33:  mov    0x14(%eax),%edx
0832a570 +0x36:  mov    -0x4(%ebp),%eax
0832a573 +0x39:  mov    %edx,0x10(%eax)
0832a576 +0x3c:  mov    0x8(%ebp),%eax
0832a579 +0x3f:  mov    0x18(%eax),%edx
0832a57c +0x42:  mov    -0x4(%ebp),%eax
0832a57f +0x45:  mov    %edx,0x14(%eax)
0832a582 +0x48:  mov    0x8(%ebp),%eax
0832a585 +0x4b:  mov    0x1c(%eax),%edx
0832a588 +0x4e:  mov    -0x4(%ebp),%eax
0832a58b +0x51:  mov    %edx,0x18(%eax)
0832a58e +0x54:  mov    0x8(%ebp),%eax
0832a591 +0x57:  movzbl 0x20(%eax),%edx
0832a595 +0x5b:  mov    -0x4(%ebp),%eax
0832a598 +0x5e:  mov    %dl,0x1c(%eax)
0832a59b +0x61:  mov    0x8(%ebp),%eax
0832a59e +0x64:  mov    0x24(%eax),%edx
0832a5a1 +0x67:  mov    -0x4(%ebp),%eax
0832a5a4 +0x6a:  mov    %edx,0x20(%eax)
0832a5a7 +0x6d:  mov    0x8(%ebp),%eax
0832a5aa +0x70:  mov    0x28(%eax),%edx
0832a5ad +0x73:  mov    -0x4(%ebp),%eax
0832a5b0 +0x76:  mov    %edx,0x24(%eax)
0832a5b3 +0x79:  leave
0832a5b4 +0x7a:  ret
0832a5b5 +0x7b:  nop
```

## 反编译 C

```c
// CCharacBloodDungeon::getData @ 0x832a53a

/* CCharacBloodDungeon::getData(char*) const */

void __thiscall CCharacBloodDungeon::getData(CCharacBloodDungeon *this,char *param_1)

{
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this + 0x1c);
  *(CCharacBloodDungeon *)(param_1 + 0x1c) = this[0x20];
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(this + 0x28);
  return;
}
```
