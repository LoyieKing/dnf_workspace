# loadData

`_ZN18online_preliminary24COnlinePreliminaryMember8loadDataEP5CUserPc`

`online_preliminary::COnlinePreliminaryMember::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryMember` | `0x08585f9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08585f9e  _ZN18online_preliminary24COnlinePreliminaryMember8loadDataEP5CUserPc
#           online_preliminary::COnlinePreliminaryMember::loadData(CUser*, char*)
# range [0x08585f9e, 0x08585fd5]
08585f9e +0x00:  push   %ebp
08585f9f +0x01:  mov    %esp,%ebp
08585fa1 +0x03:  sub    $0x10,%esp
08585fa4 +0x06:  mov    0x10(%ebp),%eax
08585fa7 +0x09:  mov    %eax,-0x4(%ebp)
08585faa +0x0c:  mov    -0x4(%ebp),%eax
08585fad +0x0f:  mov    0x8(%eax),%edx
08585fb0 +0x12:  mov    0x8(%ebp),%eax
08585fb3 +0x15:  mov    %edx,0x8(%eax)
08585fb6 +0x18:  mov    -0x4(%ebp),%eax
08585fb9 +0x1b:  mov    0xc(%eax),%edx
08585fbc +0x1e:  mov    0x8(%ebp),%eax
08585fbf +0x21:  mov    %edx,0xc(%eax)
08585fc2 +0x24:  mov    -0x4(%ebp),%eax
08585fc5 +0x27:  mov    0x10(%eax),%edx
08585fc8 +0x2a:  mov    0x8(%ebp),%eax
08585fcb +0x2d:  mov    %edx,0x10(%eax)
08585fce +0x30:  mov    $0x1,%eax
08585fd3 +0x35:  leave
08585fd4 +0x36:  ret
08585fd5 +0x37:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryMember::loadData @ 0x8585f9e

/* online_preliminary::COnlinePreliminaryMember::loadData(CUser*, char*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryMember::loadData
          (COnlinePreliminaryMember *this,CUser *param_1,char *param_2)

{
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return 1;
}
```
