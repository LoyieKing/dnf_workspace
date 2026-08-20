# EndEvent

`_ZN14CGmRegistEvent8EndEventEv`

`CGmRegistEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CGmRegistEvent` | `0x0811cd76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811cd76  _ZN14CGmRegistEvent8EndEventEv
#           CGmRegistEvent::EndEvent()
# range [0x0811cd76, 0x0811cdb3]
0811cd76 +0x00:  push   %ebp
0811cd77 +0x01:  mov    %esp,%ebp
0811cd79 +0x03:  sub    $0x28,%esp
0811cd7c +0x06:  movl   $0x0,0xc(%esp)
0811cd84 +0x0e:  movl   $0x24,0x8(%esp)
0811cd8c +0x16:  movl   $&_ZZN14CGmRegistEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
0811cd94 +0x1e:  lea    -0x18(%ebp),%eax
0811cd97 +0x21:  mov    %eax,(%esp)
0811cd9a +0x24:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0811cd9f +0x29:  movl   $"CGmRegistEvent End!",0x4(%esp)
0811cda7 +0x31:  lea    -0x18(%ebp),%eax
0811cdaa +0x34:  mov    %eax,(%esp)
0811cdad +0x37:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0811cdb2 +0x3c:  leave
0811cdb3 +0x3d:  ret
```

## 反编译 C

```c
// CGmRegistEvent::EndEvent @ 0x811cd76

/* CGmRegistEvent::EndEvent() */

void CGmRegistEvent::EndEvent(void)

{
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual void CGmRegistEvent::EndEvent()",0x24,0);
  cMyTrace::operator()(local_1c,"CGmRegistEvent End!");
  return;
}
```
