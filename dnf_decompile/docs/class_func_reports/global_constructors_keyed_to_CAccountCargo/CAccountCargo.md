# CAccountCargo

`_GLOBAL__I__ZN13CAccountCargoC2Ev`

`global constructors keyed to CAccountCargo::CAccountCargo()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CAccountCargo` | `0x0828b58b` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828b58b  _GLOBAL__I__ZN13CAccountCargoC2Ev
#           global constructors keyed to CAccountCargo::CAccountCargo()
# range [0x0828b58b, 0x0828b5ff]
0828b58b +0x00:  push   %ebp
0828b58c +0x01:  mov    %esp,%ebp
0828b58e +0x03:  sub    $0x18,%esp
0828b591 +0x06:  movl   $0xffff,0x4(%esp)
0828b599 +0x0e:  movl   $0x1,(%esp)
0828b5a0 +0x15:  call   0828b54b <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0828b5a5 +0x1a:  leave
0828b5a6 +0x1b:  ret
0828b5a7 +0x1c:  nop
0828b5a8 +0x1d:  push   %ebp
0828b5a9 +0x1e:  mov    %esp,%ebp
0828b5ab +0x20:  mov    0x8(%ebp),%eax
0828b5ae +0x23:  movzbl 0x3(%eax),%eax
0828b5b2 +0x27:  pop    %ebp
0828b5b3 +0x28:  ret
0828b5b4 +0x29:  push   %ebp
0828b5b5 +0x2a:  mov    %esp,%ebp
0828b5b7 +0x2c:  mov    0x8(%ebp),%eax
0828b5ba +0x2f:  movzbl 0x60(%eax),%eax
0828b5be +0x33:  cmp    $0x1,%al
0828b5c0 +0x35:  sete   %al
0828b5c3 +0x38:  pop    %ebp
0828b5c4 +0x39:  ret
0828b5c5 +0x3a:  nop
0828b5c6 +0x3b:  push   %ebp
0828b5c7 +0x3c:  mov    %esp,%ebp
0828b5c9 +0x3e:  sub    $0x18,%esp
0828b5cc +0x41:  mov    0x8(%ebp),%eax
0828b5cf +0x44:  add    $0x6effc,%eax
0828b5d4 +0x49:  mov    %eax,(%esp)
0828b5d7 +0x4c:  call   0828986c <_ZN13CAccountCargo5ClearEv>  ; CAccountCargo::Clear()
0828b5dc +0x51:  leave
0828b5dd +0x52:  ret
0828b5de +0x53:  push   %ebp
0828b5df +0x54:  mov    %esp,%ebp
0828b5e1 +0x56:  sub    $0x18,%esp
0828b5e4 +0x59:  mov    0x8(%ebp),%eax
0828b5e7 +0x5c:  lea    0x79744(%eax),%edx
0828b5ed +0x62:  mov    0xc(%ebp),%eax
0828b5f0 +0x65:  mov    %eax,0x4(%esp)
0828b5f4 +0x69:  mov    %edx,(%esp)
0828b5f7 +0x6c:  call   0832acb2 <_ZNK13charac_expand8CDataMgr8GetDataRE23ENUM_CHARAC_EXPAND_TYPE>  ; charac_expand::CDataMgr::GetDataR(ENUM_CHARAC_EXPAND_TYPE) const
0828b5fc +0x71:  leave
0828b5fd +0x72:  ret
0828b5fe +0x73:  nop
0828b5ff +0x74:  nop
```

## 反编译 C

```c
// <global>::global @ 0x828b58b

/* CAccountCargo::CAccountCargo() */

void CAccountCargo::_GLOBAL__I_CAccountCargo(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
