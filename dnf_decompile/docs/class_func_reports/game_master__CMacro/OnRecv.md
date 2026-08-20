# OnRecv

`_ZN11game_master6CMacro6OnRecvEiiPci`

`game_master::CMacro::OnRecv(int, int, char*, int)`

| 类 | 地址 |
|---|---|
| `game_master::CMacro` | `0x084a8870` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8870  _ZN11game_master6CMacro6OnRecvEiiPci
#           game_master::CMacro::OnRecv(int, int, char*, int)
# range [0x084a8870, 0x084a88a9]
084a8870 +0x00:  push   %ebp
084a8871 +0x01:  mov    %esp,%ebp
084a8873 +0x03:  sub    $0x28,%esp
084a8876 +0x06:  mov    0x8(%ebp),%eax
084a8879 +0x09:  mov    (%eax),%eax
084a887b +0x0b:  cmp    $0x1,%eax
084a887e +0x0e:  jne    084a88a7 <+0x37>
084a8880 +0x10:  mov    0x18(%ebp),%eax
084a8883 +0x13:  mov    %eax,0x10(%esp)
084a8887 +0x17:  mov    0x14(%ebp),%eax
084a888a +0x1a:  mov    %eax,0xc(%esp)
084a888e +0x1e:  mov    0x10(%ebp),%eax
084a8891 +0x21:  mov    %eax,0x8(%esp)
084a8895 +0x25:  mov    0xc(%ebp),%eax
084a8898 +0x28:  mov    %eax,0x4(%esp)
084a889c +0x2c:  mov    0x8(%ebp),%eax
084a889f +0x2f:  mov    %eax,(%esp)
084a88a2 +0x32:  call   084a8802 <_ZN11game_master6CMacro9RecordingEiiPci>  ; game_master::CMacro::Recording(int, int, char*, int)
084a88a7 +0x37:  leave
084a88a8 +0x38:  ret
084a88a9 +0x39:  nop
```

## 反编译 C

```c
// game_master::CMacro::OnRecv @ 0x84a8870

/* game_master::CMacro::OnRecv(int, int, char*, int) */

void __thiscall
game_master::CMacro::OnRecv(CMacro *this,int param_1,int param_2,char *param_3,int param_4)

{
  if (*(int *)this == 1) {
    Recording(this,param_1,param_2,param_3,param_4);
  }
  return;
}
```
