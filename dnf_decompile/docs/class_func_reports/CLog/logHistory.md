# logHistory

`_ZN4CLog10logHistoryEPKcPc`

`CLog::logHistory(char const*, char*)`

| 类 | 地址 |
|---|---|
| `CLog` | `0x0854f2e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854f2e2  _ZN4CLog10logHistoryEPKcPc
#           CLog::logHistory(char const*, char*)
# range [0x0854f2e2, 0x0854f409]
0854f2e2 +0x000:  push   %ebp
0854f2e3 +0x001:  mov    %esp,%ebp
0854f2e5 +0x003:  sub    $0x1038,%esp
0854f2eb +0x009:  cmpl   $0x0,0x8(%ebp)
0854f2ef +0x00d:  jne    0854f2fb <+0x19>
0854f2f1 +0x00f:  mov    $0x0,%eax
0854f2f6 +0x014:  jmp    0854f408 <+0x126>
0854f2fb +0x019:  mov    0x8(%ebp),%eax
0854f2fe +0x01c:  mov    0x100(%eax),%eax
0854f304 +0x022:  test   %eax,%eax
0854f306 +0x024:  jne    0854f312 <+0x30>
0854f308 +0x026:  mov    $0x0,%eax
0854f30d +0x02b:  jmp    0854f408 <+0x126>
0854f312 +0x030:  mov    0x8(%ebp),%eax
0854f315 +0x033:  mov    0x100(%eax),%edx
0854f31b +0x039:  mov    &stdout,%eax
0854f320 +0x03e:  cmp    %eax,%edx
0854f322 +0x040:  je     0854f388 <+0xa6>
0854f324 +0x042:  lea    -0x18(%ebp),%eax
0854f327 +0x045:  mov    %eax,(%esp)
0854f32a +0x048:  call   0854e228 <_ZN8TimeLog_7setTimeEv>  ; TimeLog_::setTime()
0854f32f +0x04d:  mov    0x8(%ebp),%eax
0854f332 +0x050:  mov    0x254(%eax),%eax
0854f338 +0x056:  mov    0x8(%ebp),%edx
0854f33b +0x059:  lea    0x100(%edx),%ecx
0854f341 +0x05f:  mov    0x8(%ebp),%edx
0854f344 +0x062:  add    $0x230,%edx
0854f34a +0x068:  mov    %eax,0x18(%esp)
0854f34e +0x06c:  movl   $".history",0x14(%esp)
0854f356 +0x074:  mov    %ecx,0x10(%esp)
0854f35a +0x078:  mov    %edx,0xc(%esp)
0854f35e +0x07c:  mov    -0x18(%ebp),%eax
0854f361 +0x07f:  mov    -0x14(%ebp),%edx
0854f364 +0x082:  mov    %eax,0x4(%esp)
0854f368 +0x086:  mov    %edx,0x8(%esp)
0854f36c +0x08a:  mov    0x8(%ebp),%eax
0854f36f +0x08d:  mov    %eax,(%esp)
0854f372 +0x090:  call   0854f594 <_ZN4CLog8checkDayE8TimeLog_PS0_RP8_IO_FILEPci>  ; CLog::checkDay(TimeLog_, TimeLog_*, _IO_FILE*&, char*, int)
0854f377 +0x095:  xor    $0x1,%eax
0854f37a +0x098:  test   %al,%al
0854f37c +0x09a:  je     0854f388 <+0xa6>
0854f37e +0x09c:  mov    $0x0,%eax
0854f383 +0x0a1:  jmp    0854f408 <+0x126>
0854f388 +0x0a6:  mov    0x10(%ebp),%eax
0854f38b +0x0a9:  mov    %eax,0x8(%esp)
0854f38f +0x0ad:  mov    0xc(%ebp),%eax
0854f392 +0x0b0:  mov    %eax,0x4(%esp)
0854f396 +0x0b4:  lea    -0x1018(%ebp),%eax
0854f39c +0x0ba:  mov    %eax,(%esp)
0854f39f +0x0bd:  call   0807d7d0 <_init+0xc8>
0854f3a4 +0x0c2:  lea    -0x1018(%ebp),%eax
0854f3aa +0x0c8:  mov    %eax,(%esp)
0854f3ad +0x0cb:  call   0807e3b0 <_init+0xca8>
0854f3b2 +0x0d0:  mov    %eax,-0x10(%ebp)
0854f3b5 +0x0d3:  movl   $0x0,-0xc(%ebp)
0854f3bc +0x0da:  jmp    0854f3c2 <+0xe0>
0854f3be +0x0dc:  addl   $0x1,-0xc(%ebp)
0854f3c2 +0x0e0:  mov    -0xc(%ebp),%eax
0854f3c5 +0x0e3:  cmp    -0x10(%ebp),%eax
0854f3c8 +0x0e6:  setl   %al
0854f3cb +0x0e9:  test   %al,%al
0854f3cd +0x0eb:  jne    0854f3be <+0xdc>
0854f3cf +0x0ed:  mov    0x8(%ebp),%eax
0854f3d2 +0x0f0:  mov    0x100(%eax),%eax
0854f3d8 +0x0f6:  lea    -0x1018(%ebp),%edx
0854f3de +0x0fc:  mov    %edx,0x8(%esp)
0854f3e2 +0x100:  movl   $"%s\r\n",0x4(%esp)
0854f3ea +0x108:  mov    %eax,(%esp)
0854f3ed +0x10b:  call   0807da90 <_init+0x388>
0854f3f2 +0x110:  mov    0x8(%ebp),%eax
0854f3f5 +0x113:  mov    0x100(%eax),%eax
0854f3fb +0x119:  mov    %eax,(%esp)
0854f3fe +0x11c:  call   0807e8d0 <_init+0x11c8>
0854f403 +0x121:  mov    $0x1,%eax
0854f408 +0x126:  leave
0854f409 +0x127:  ret
```

## 反编译 C

```c
// CLog::logHistory @ 0x854f2e2

/* CLog::logHistory(char const*, char*) */

undefined4 __thiscall CLog::logHistory(CLog *this,char *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char local_101c [4096];
  undefined4 local_1c;
  undefined4 local_18;
  size_t local_14;
  int local_10;
  
  if (this == (CLog *)0x0) {
    uVar2 = 0;
  }
  else if (*(int *)(this + 0x100) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(this + 0x100) != stdout) {
      TimeLog_::setTime((TimeLog_ *)&local_1c);
      cVar1 = checkDay(this,local_1c,local_18,this + 0x230,this + 0x100,".history",
                       *(undefined4 *)(this + 0x254));
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    vsprintf(local_101c,param_1,param_2);
    local_14 = strlen(local_101c);
    for (local_10 = 0; local_10 < (int)local_14; local_10 = local_10 + 1) {
    }
    fprintf(*(FILE **)(this + 0x100),"%s\r\n",local_101c);
    fflush(*(FILE **)(this + 0x100));
    uVar2 = 1;
  }
  return uVar2;
}
```
