# dispatch

`_ZN19DB_DispatcherTaiwan8dispatchEiiP6Stream`

`DB_DispatcherTaiwan::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_DispatcherTaiwan` | `0x0844ca48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844ca48  _ZN19DB_DispatcherTaiwan8dispatchEiiP6Stream
#           DB_DispatcherTaiwan::dispatch(int, int, Stream*)
# range [0x0844ca48, 0x0844cafd]
0844ca48 +0x00:  push   %ebp
0844ca49 +0x01:  mov    %esp,%ebp
0844ca4b +0x03:  push   %ebx
0844ca4c +0x04:  sub    $0x34,%esp
0844ca4f +0x07:  movl   $0x0,-0x20(%ebp)
0844ca56 +0x0e:  lea    -0x20(%ebp),%eax
0844ca59 +0x11:  mov    %eax,0x4(%esp)
0844ca5d +0x15:  mov    0x14(%ebp),%eax
0844ca60 +0x18:  mov    %eax,(%esp)
0844ca63 +0x1b:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0844ca68 +0x20:  mov    -0x20(%ebp),%eax
0844ca6b +0x23:  mov    0x8(%ebp),%edx
0844ca6e +0x26:  add    $0x4,%edx
0844ca71 +0x29:  mov    %eax,0x4(%esp)
0844ca75 +0x2d:  mov    %edx,(%esp)
0844ca78 +0x30:  call   0815a7f6 <_ZN18TaiwanDBDispatcher13getDispatcherEN18TaiwanInternalPack1TE>  ; TaiwanDBDispatcher::getDispatcher(TaiwanInternalPack::T)
0844ca7d +0x35:  mov    %eax,-0xc(%ebp)
0844ca80 +0x38:  cmpl   $0x0,-0xc(%ebp)
0844ca84 +0x3c:  jne    0844cad1 <+0x89>
0844ca86 +0x3e:  mov    -0x20(%ebp),%ebx
0844ca89 +0x41:  movl   $0x5,0xc(%esp)
0844ca91 +0x49:  movl   $0xc17a,0x8(%esp)
0844ca99 +0x51:  movl   $&_ZZN19DB_DispatcherTaiwan8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0844caa1 +0x59:  lea    -0x1c(%ebp),%eax
0844caa4 +0x5c:  mov    %eax,(%esp)
0844caa7 +0x5f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844caac +0x64:  mov    0x10(%ebp),%eax
0844caaf +0x67:  mov    %eax,0xc(%esp)
0844cab3 +0x6b:  mov    %ebx,0x8(%esp)
0844cab7 +0x6f:  movl   $"[TaiwanDispater] Invalid internal packet code. Code:%d, Uid:%d",0x4(%esp)
0844cabf +0x77:  lea    -0x1c(%ebp),%eax
0844cac2 +0x7a:  mov    %eax,(%esp)
0844cac5 +0x7d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844caca +0x82:  mov    $0x0,%eax
0844cacf +0x87:  jmp    0844caf8 <+0xb0>
0844cad1 +0x89:  mov    -0xc(%ebp),%eax
0844cad4 +0x8c:  mov    (%eax),%eax
0844cad6 +0x8e:  add    $0x8,%eax
0844cad9 +0x91:  mov    (%eax),%edx
0844cadb +0x93:  mov    0x14(%ebp),%eax
0844cade +0x96:  mov    %eax,0xc(%esp)
0844cae2 +0x9a:  mov    0x10(%ebp),%eax
0844cae5 +0x9d:  mov    %eax,0x8(%esp)
0844cae9 +0xa1:  mov    0xc(%ebp),%eax
0844caec +0xa4:  mov    %eax,0x4(%esp)
0844caf0 +0xa8:  mov    -0xc(%ebp),%eax
0844caf3 +0xab:  mov    %eax,(%esp)
0844caf6 +0xae:  call   *%edx
0844caf8 +0xb0:  add    $0x34,%esp
0844cafb +0xb3:  pop    %ebx
0844cafc +0xb4:  pop    %ebp
0844cafd +0xb5:  ret
```

## 反编译 C

```c
// DB_DispatcherTaiwan::dispatch @ 0x844ca48

/* DB_DispatcherTaiwan::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_DispatcherTaiwan::dispatch(DB_DispatcherTaiwan *this,int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_24;
  cMyTrace local_20 [16];
  int *local_10;
  
  local_24 = 0;
  Stream::operator>>(param_3,&local_24);
  local_10 = (int *)TaiwanDBDispatcher::getDispatcher(this + 4,local_24);
  iVar1 = local_24;
  if (local_10 == (int *)0x0) {
    cMyTrace::cMyTrace(local_20,"virtual bool DB_DispatcherTaiwan::dispatch(int, int, Stream*)",
                       0xc17a,5);
    cMyTrace::operator()
              (local_20,"[TaiwanDispater] Invalid internal packet code. Code:%d, Uid:%d",iVar1,
               param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*local_10 + 8))(local_10,param_1,param_2,param_3);
  }
  return uVar2;
}
```
