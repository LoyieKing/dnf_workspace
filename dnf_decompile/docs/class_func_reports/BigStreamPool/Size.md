# Size

`_ZN13BigStreamPool4SizeEv`

`BigStreamPool::Size()`

| 类 | 地址 |
|---|---|
| `BigStreamPool` | `0x082903e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082903e0  _ZN13BigStreamPool4SizeEv
#           BigStreamPool::Size()
# range [0x082903e0, 0x082903f5]
082903e0 +0x00:  push   %ebp
082903e1 +0x01:  mov    %esp,%ebp
082903e3 +0x03:  sub    $0x18,%esp
082903e6 +0x06:  mov    0x8(%ebp),%eax
082903e9 +0x09:  mov    0x18(%eax),%eax
082903ec +0x0c:  mov    %eax,(%esp)
082903ef +0x0f:  call   082adf1c <_GLOBAL__I__ZN4CLog5this_E+0xa343>  ; global constructors keyed to CLog::this_+0xa343
082903f4 +0x14:  leave
082903f5 +0x15:  ret
```

## 反编译 C

```c
// BigStreamPool::Size @ 0x82903e0

/* BigStreamPool::Size() */

void __thiscall BigStreamPool::Size(BigStreamPool *this)

{
  DynamicPool<BigStream>::Size(*(DynamicPool<BigStream> **)(this + 0x18));
  return;
}
```
