# Init

`_ZN15BaseServerProxy4InitEv`

`BaseServerProxy::Init()`

| 类 | 地址 |
|---|---|
| `BaseServerProxy` | `0x082fd460` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fd460  _ZN15BaseServerProxy4InitEv
#           BaseServerProxy::Init()
# range [0x082fd460, 0x082fd47b]
082fd460 +0x00:  push   %ebp
082fd461 +0x01:  mov    %esp,%ebp
082fd463 +0x03:  sub    $0x18,%esp
082fd466 +0x06:  movl   $0x1,0x4(%esp)
082fd46e +0x0e:  mov    0x8(%ebp),%eax
082fd471 +0x11:  mov    %eax,(%esp)
082fd474 +0x14:  call   082fd47c <_ZN15BaseServerProxy7InitTcpEb>  ; BaseServerProxy::InitTcp(bool)
082fd479 +0x19:  leave
082fd47a +0x1a:  ret
082fd47b +0x1b:  nop
```

## 反编译 C

```c
// BaseServerProxy::Init @ 0x82fd460

/* BaseServerProxy::Init() */

void __thiscall BaseServerProxy::Init(BaseServerProxy *this)

{
  InitTcp(this,true);
  return;
}
```
