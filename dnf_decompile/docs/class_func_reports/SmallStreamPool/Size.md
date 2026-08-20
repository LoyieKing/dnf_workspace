# Size

`_ZN15SmallStreamPool4SizeEv`

`SmallStreamPool::Size()`

| 类 | 地址 |
|---|---|
| `SmallStreamPool` | `0x082900e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082900e0  _ZN15SmallStreamPool4SizeEv
#           SmallStreamPool::Size()
# range [0x082900e0, 0x082900f5]
082900e0 +0x00:  push   %ebp
082900e1 +0x01:  mov    %esp,%ebp
082900e3 +0x03:  sub    $0x18,%esp
082900e6 +0x06:  mov    0x8(%ebp),%eax
082900e9 +0x09:  mov    0x18(%eax),%eax
082900ec +0x0c:  mov    %eax,(%esp)
082900ef +0x0f:  call   082ad7e6 <_GLOBAL__I__ZN4CLog5this_E+0x9c0d>  ; global constructors keyed to CLog::this_+0x9c0d
082900f4 +0x14:  leave
082900f5 +0x15:  ret
```

## 反编译 C

```c
// SmallStreamPool::Size @ 0x82900e0

/* SmallStreamPool::Size() */

void __thiscall SmallStreamPool::Size(SmallStreamPool *this)

{
  DynamicPool<SmallStream>::Size(*(DynamicPool<SmallStream> **)(this + 0x18));
  return;
}
```
