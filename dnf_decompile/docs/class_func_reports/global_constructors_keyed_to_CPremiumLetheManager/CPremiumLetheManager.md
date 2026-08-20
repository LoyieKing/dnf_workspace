# CPremiumLetheManager

`_GLOBAL__I__ZN20CPremiumLetheManagerC2Ev`

`global constructors keyed to CPremiumLetheManager::CPremiumLetheManager()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CPremiumLetheManager` | `0x085c4b70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c4b70  _GLOBAL__I__ZN20CPremiumLetheManagerC2Ev
#           global constructors keyed to CPremiumLetheManager::CPremiumLetheManager()
# range [0x085c4b70, 0x085c4bd3]
085c4b70 +0x00:  push   %ebp
085c4b71 +0x01:  mov    %esp,%ebp
085c4b73 +0x03:  sub    $0x18,%esp
085c4b76 +0x06:  movl   $0xffff,0x4(%esp)
085c4b7e +0x0e:  movl   $0x1,(%esp)
085c4b85 +0x15:  call   085c4b30 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
085c4b8a +0x1a:  leave
085c4b8b +0x1b:  ret
085c4b8c +0x1c:  push   %ebp
085c4b8d +0x1d:  mov    %esp,%ebp
085c4b8f +0x1f:  mov    0x8(%ebp),%eax
085c4b92 +0x22:  mov    0x10(%eax),%eax
085c4b95 +0x25:  test   %eax,%eax
085c4b97 +0x27:  je     085c4ba8 <+0x38>
085c4b99 +0x29:  mov    0x8(%ebp),%eax
085c4b9c +0x2c:  mov    0x10(%eax),%eax
085c4b9f +0x2f:  movzbl 0xeb3(%eax),%eax
085c4ba6 +0x36:  jmp    085c4bad <+0x3d>
085c4ba8 +0x38:  mov    $0x0,%eax
085c4bad +0x3d:  pop    %ebp
085c4bae +0x3e:  ret
085c4baf +0x3f:  nop
085c4bb0 +0x40:  push   %ebp
085c4bb1 +0x41:  mov    %esp,%ebp
085c4bb3 +0x43:  mov    0x8(%ebp),%eax
085c4bb6 +0x46:  mov    0x10(%eax),%eax
085c4bb9 +0x49:  test   %eax,%eax
085c4bbb +0x4b:  je     085c4bcc <+0x5c>
085c4bbd +0x4d:  mov    0x8(%ebp),%eax
085c4bc0 +0x50:  mov    0x10(%eax),%eax
085c4bc3 +0x53:  movzbl 0xeb5(%eax),%eax
085c4bca +0x5a:  jmp    085c4bd1 <+0x61>
085c4bcc +0x5c:  mov    $0x0,%eax
085c4bd1 +0x61:  pop    %ebp
085c4bd2 +0x62:  ret
085c4bd3 +0x63:  nop
```

## 反编译 C

```c
// <global>::global @ 0x85c4b70

/* CPremiumLetheManager::CPremiumLetheManager() */

void CPremiumLetheManager::_GLOBAL__I_CPremiumLetheManager(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
