# _IsEventing

`_GLOBAL__I__ZN8WongWork9CEventMgr11_IsEventingEiiiiiiiiNS0_10EVENT_TYPEE`

`global constructors keyed to WongWork::CEventMgr::_IsEventing(int, int, int, int, int, int, int, int, WongWork::CEventMgr::EVENT_TYPE)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::CEventMgr` | `0x0848f1e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848f1e4  _GLOBAL__I__ZN8WongWork9CEventMgr11_IsEventingEiiiiiiiiNS0_10EVENT_TYPEE
#           global constructors keyed to WongWork::CEventMgr::_IsEventing(int, int, int, int, int, int, int, int, WongWork::CEventMgr::EVENT_TYPE)
# range [0x0848f1e4, 0x0848f20b]
0848f1e4 +0x00:  push   %ebp
0848f1e5 +0x01:  mov    %esp,%ebp
0848f1e7 +0x03:  sub    $0x18,%esp
0848f1ea +0x06:  movl   $0xffff,0x4(%esp)
0848f1f2 +0x0e:  movl   $0x1,(%esp)
0848f1f9 +0x15:  call   0848f1a4 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0848f1fe +0x1a:  leave
0848f1ff +0x1b:  ret
0848f200 +0x1c:  push   %ebp
0848f201 +0x1d:  mov    %esp,%ebp
0848f203 +0x1f:  mov    0x8(%ebp),%eax
0848f206 +0x22:  mov    0xc(%eax),%eax
0848f209 +0x25:  pop    %ebp
0848f20a +0x26:  ret
0848f20b +0x27:  nop
```

## 反编译 C

```c
// <global>::global @ 0x848f1e4

/* WongWork::CEventMgr::_IsEventing(int, int, int, int, int, int, int, int,
   WongWork::CEventMgr::EVENT_TYPE) */

void WongWork::CEventMgr::_GLOBAL__I__IsEventing(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
