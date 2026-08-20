# dispatch

`_ZN12DBDispatcher8dispatchEiiP6Stream`

`DBDispatcher::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DBDispatcher` | `0x083fbf7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083fbf7c  _ZN12DBDispatcher8dispatchEiiP6Stream
#           DBDispatcher::dispatch(int, int, Stream*)
# range [0x083fbf7c, 0x083fbfc5]
083fbf7c +0x00:  push   %ebp
083fbf7d +0x01:  mov    %esp,%ebp
083fbf7f +0x03:  push   %ebx
083fbf80 +0x04:  sub    $0x24,%esp
083fbf83 +0x07:  cmpl   $0xffffffff,0x10(%ebp)
083fbf87 +0x0b:  je     083fbfba <+0x3e>
083fbf89 +0x0d:  mov    0xc(%ebp),%eax
083fbf8c +0x10:  lea    0x7d0(%eax),%ebx
083fbf92 +0x16:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
083fbf97 +0x1b:  mov    %ebx,0x8(%esp)
083fbf9b +0x1f:  mov    0x10(%ebp),%edx
083fbf9e +0x22:  mov    %edx,0x4(%esp)
083fbfa2 +0x26:  mov    %eax,(%esp)
083fbfa5 +0x29:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
083fbfaa +0x2e:  mov    %eax,-0xc(%ebp)
083fbfad +0x31:  cmpl   $0x0,-0xc(%ebp)
083fbfb1 +0x35:  jne    083fbfba <+0x3e>
083fbfb3 +0x37:  mov    $0x0,%eax
083fbfb8 +0x3c:  jmp    083fbfbf <+0x43>
083fbfba +0x3e:  mov    $0x1,%eax
083fbfbf +0x43:  add    $0x24,%esp
083fbfc2 +0x46:  pop    %ebx
083fbfc3 +0x47:  pop    %ebp
083fbfc4 +0x48:  ret
083fbfc5 +0x49:  nop
```

## 反编译 C

```c
// DBDispatcher::dispatch @ 0x83fbf7c

/* DBDispatcher::dispatch(int, int, Stream*) */

undefined4 DBDispatcher::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  
  if (param_3 != (Stream *)0xffffffff) {
    iVar1 = G_CGameManager();
    iVar1 = CGameManager::getUser(iVar1,(int)param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
```
