# Size

`_ZN10StreamPool4SizeEv`

`StreamPool::Size()`

| 类 | 地址 |
|---|---|
| `StreamPool` | `0x0828fc06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828fc06  _ZN10StreamPool4SizeEv
#           StreamPool::Size()
# range [0x0828fc06, 0x0828fc1b]
0828fc06 +0x00:  push   %ebp
0828fc07 +0x01:  mov    %esp,%ebp
0828fc09 +0x03:  sub    $0x18,%esp
0828fc0c +0x06:  mov    0x8(%ebp),%eax
0828fc0f +0x09:  mov    0x18(%eax),%eax
0828fc12 +0x0c:  mov    %eax,(%esp)
0828fc15 +0x0f:  call   082acb6a <_GLOBAL__I__ZN4CLog5this_E+0x8f91>  ; global constructors keyed to CLog::this_+0x8f91
0828fc1a +0x14:  leave
0828fc1b +0x15:  ret
```

## 反编译 C

```c
// StreamPool::Size @ 0x828fc06

/* StreamPool::Size() */

void __thiscall StreamPool::Size(StreamPool *this)

{
  DynamicPool<Stream>::Size(*(DynamicPool<Stream> **)(this + 0x18));
  return;
}
```
