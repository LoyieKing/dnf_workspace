# collectPcRoomPlayTime

`_ZN5CUser21collectPcRoomPlayTimeEv`

`CUser::collectPcRoomPlayTime()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f7ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f7ba  _ZN5CUser21collectPcRoomPlayTimeEv
#           CUser::collectPcRoomPlayTime()
# range [0x0868f7ba, 0x0868f807]
0868f7ba +0x00:  push   %ebp
0868f7bb +0x01:  mov    %esp,%ebp
0868f7bd +0x03:  push   %ebx
0868f7be +0x04:  sub    $0x24,%esp
0868f7c1 +0x07:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0868f7c8 +0x0e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0868f7cd +0x13:  mov    %eax,-0xc(%ebp)
0868f7d0 +0x16:  mov    0x8(%ebp),%eax
0868f7d3 +0x19:  mov    0x8eba0(%eax),%edx
0868f7d9 +0x1f:  mov    0x8(%ebp),%eax
0868f7dc +0x22:  mov    0x8eb9c(%eax),%eax
0868f7e2 +0x28:  mov    -0xc(%ebp),%ecx
0868f7e5 +0x2b:  mov    %ecx,%ebx
0868f7e7 +0x2d:  sub    %eax,%ebx
0868f7e9 +0x2f:  mov    %ebx,%eax
0868f7eb +0x31:  add    %eax,%edx
0868f7ed +0x33:  mov    0x8(%ebp),%eax
0868f7f0 +0x36:  mov    %edx,0x8eba0(%eax)
0868f7f6 +0x3c:  mov    0x8(%ebp),%eax
0868f7f9 +0x3f:  mov    -0xc(%ebp),%edx
0868f7fc +0x42:  mov    %edx,0x8eb9c(%eax)
0868f802 +0x48:  add    $0x24,%esp
0868f805 +0x4b:  pop    %ebx
0868f806 +0x4c:  pop    %ebp
0868f807 +0x4d:  ret
```

## 反编译 C

```c
// CUser::collectPcRoomPlayTime @ 0x868f7ba

/* CUser::collectPcRoomPlayTime() */

void __thiscall CUser::collectPcRoomPlayTime(CUser *this)

{
  int iVar1;
  
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(int *)(this + 0x8eba0) = *(int *)(this + 0x8eba0) + (iVar1 - *(int *)(this + 0x8eb9c));
  *(int *)(this + 0x8eb9c) = iVar1;
  return;
}
```
