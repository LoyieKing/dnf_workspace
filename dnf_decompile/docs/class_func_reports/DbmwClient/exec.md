# exec

`_ZN10DbmwClient4execEv`

`DbmwClient::exec()`

| 类 | 地址 |
|---|---|
| `DbmwClient` | `0x081211c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081211c4  _ZN10DbmwClient4execEv
#           DbmwClient::exec()
# range [0x081211c4, 0x081213bf]
081211c4 +0x000:  push   %ebp
081211c5 +0x001:  mov    %esp,%ebp
081211c7 +0x003:  sub    $0x38,%esp
081211ca +0x006:  mov    0x8(%ebp),%eax
081211cd +0x009:  movzbl (%eax),%eax
081211d0 +0x00c:  test   %al,%al
081211d2 +0x00e:  je     081211de <+0x1a>
081211d4 +0x010:  mov    $0x0,%eax
081211d9 +0x015:  jmp    081213be <+0x1fa>
081211de +0x01a:  mov    0x8(%ebp),%eax
081211e1 +0x01d:  mov    %eax,(%esp)
081211e4 +0x020:  call   0812141c <_GLOBAL__I__ZN10DbmwClientC2Ev+0x1c>  ; global constructors keyed to DbmwClient::DbmwClient()+0x1c
081211e9 +0x025:  xor    $0x1,%eax
081211ec +0x028:  test   %al,%al
081211ee +0x02a:  jne    08121202 <+0x3e>
081211f0 +0x02c:  mov    0x8(%ebp),%eax
081211f3 +0x02f:  mov    %eax,(%esp)
081211f6 +0x032:  call   08121428 <_GLOBAL__I__ZN10DbmwClientC2Ev+0x28>  ; global constructors keyed to DbmwClient::DbmwClient()+0x28
081211fb +0x037:  xor    $0x1,%eax
081211fe +0x03a:  test   %al,%al
08121200 +0x03c:  je     08121209 <+0x45>
08121202 +0x03e:  mov    $0x1,%eax
08121207 +0x043:  jmp    0812120e <+0x4a>
08121209 +0x045:  mov    $0x0,%eax
0812120e +0x04a:  test   %al,%al
08121210 +0x04c:  je     0812122e <+0x6a>
08121212 +0x04e:  mov    0x8(%ebp),%eax
08121215 +0x051:  mov    %eax,(%esp)
08121218 +0x054:  call   08121156 <_ZN10DbmwClient9ReconnectEv>  ; DbmwClient::Reconnect()
0812121d +0x059:  xor    $0x1,%eax
08121220 +0x05c:  test   %al,%al
08121222 +0x05e:  je     0812122e <+0x6a>
08121224 +0x060:  mov    $0x0,%eax
08121229 +0x065:  jmp    081213be <+0x1fa>
0812122e +0x06a:  mov    0x8(%ebp),%eax
08121231 +0x06d:  mov    %eax,(%esp)
08121234 +0x070:  call   08120cd0 <_ZN10DbmwClient7DoQueryEv>  ; DbmwClient::DoQuery()
08121239 +0x075:  xor    $0x1,%eax
0812123c +0x078:  test   %al,%al
0812123e +0x07a:  je     081212f8 <+0x134>
08121244 +0x080:  mov    0x8(%ebp),%eax
08121247 +0x083:  mov    %eax,(%esp)
0812124a +0x086:  call   0812141c <_GLOBAL__I__ZN10DbmwClientC2Ev+0x1c>  ; global constructors keyed to DbmwClient::DbmwClient()+0x1c
0812124f +0x08b:  xor    $0x1,%eax
08121252 +0x08e:  test   %al,%al
08121254 +0x090:  jne    08121268 <+0xa4>
08121256 +0x092:  mov    0x8(%ebp),%eax
08121259 +0x095:  mov    %eax,(%esp)
0812125c +0x098:  call   08121428 <_GLOBAL__I__ZN10DbmwClientC2Ev+0x28>  ; global constructors keyed to DbmwClient::DbmwClient()+0x28
08121261 +0x09d:  xor    $0x1,%eax
08121264 +0x0a0:  test   %al,%al
08121266 +0x0a2:  je     0812126f <+0xab>
08121268 +0x0a4:  mov    $0x1,%eax
0812126d +0x0a9:  jmp    08121274 <+0xb0>
0812126f +0x0ab:  mov    $0x0,%eax
08121274 +0x0b0:  test   %al,%al
08121276 +0x0b2:  je     081212ee <+0x12a>
08121278 +0x0b4:  mov    0x8(%ebp),%eax
0812127b +0x0b7:  add    $0x34,%eax
0812127e +0x0ba:  movl   $0x2f4,0x18(%esp)
08121286 +0x0c2:  mov    %eax,0x14(%esp)
0812128a +0x0c6:  movl   $"AccountDBMW DoQuery() Error!! Query(%s) line(%d)",0x10(%esp)
08121292 +0x0ce:  movl   $0x2f4,0xc(%esp)
0812129a +0x0d6:  movl   $&_ZZN10DbmwClient4execEvE12__FUNCTION__,0x8(%esp)
081212a2 +0x0de:  movl   $"localchina/DbmwClient.cpp",0x4(%esp)
081212aa +0x0e6:  movl   $0x1,(%esp)
081212b1 +0x0ed:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081212b6 +0x0f2:  mov    0x8(%ebp),%eax
081212b9 +0x0f5:  mov    %eax,(%esp)
081212bc +0x0f8:  call   08121156 <_ZN10DbmwClient9ReconnectEv>  ; DbmwClient::Reconnect()
081212c1 +0x0fd:  xor    $0x1,%eax
081212c4 +0x100:  test   %al,%al
081212c6 +0x102:  je     081212d2 <+0x10e>
081212c8 +0x104:  mov    $0xffffffff,%eax
081212cd +0x109:  jmp    081213be <+0x1fa>
081212d2 +0x10e:  mov    0x8(%ebp),%eax
081212d5 +0x111:  mov    %eax,(%esp)
081212d8 +0x114:  call   08120cd0 <_ZN10DbmwClient7DoQueryEv>  ; DbmwClient::DoQuery()
081212dd +0x119:  xor    $0x1,%eax
081212e0 +0x11c:  test   %al,%al
081212e2 +0x11e:  je     081212ee <+0x12a>
081212e4 +0x120:  mov    $0xffffffff,%eax
081212e9 +0x125:  jmp    081213be <+0x1fa>
081212ee +0x12a:  mov    $0x0,%eax
081212f3 +0x12f:  jmp    081213be <+0x1fa>
081212f8 +0x134:  mov    0x8(%ebp),%eax
081212fb +0x137:  mov    %eax,(%esp)
081212fe +0x13a:  call   08120dbc <_ZN10DbmwClient9DoReceiveEv>  ; DbmwClient::DoReceive()
08121303 +0x13f:  mov    %eax,-0xc(%ebp)
08121306 +0x142:  cmpl   $0x0,-0xc(%ebp)
0812130a +0x146:  jne    081213a2 <+0x1de>
08121310 +0x14c:  mov    0x8(%ebp),%eax
08121313 +0x14f:  mov    %eax,(%esp)
08121316 +0x152:  call   0812141c <_GLOBAL__I__ZN10DbmwClientC2Ev+0x1c>  ; global constructors keyed to DbmwClient::DbmwClient()+0x1c
0812131b +0x157:  xor    $0x1,%eax
0812131e +0x15a:  test   %al,%al
08121320 +0x15c:  jne    08121334 <+0x170>
08121322 +0x15e:  mov    0x8(%ebp),%eax
08121325 +0x161:  mov    %eax,(%esp)
08121328 +0x164:  call   08121428 <_GLOBAL__I__ZN10DbmwClientC2Ev+0x28>  ; global constructors keyed to DbmwClient::DbmwClient()+0x28
0812132d +0x169:  xor    $0x1,%eax
08121330 +0x16c:  test   %al,%al
08121332 +0x16e:  je     0812133b <+0x177>
08121334 +0x170:  mov    $0x1,%eax
08121339 +0x175:  jmp    08121340 <+0x17c>
0812133b +0x177:  mov    $0x0,%eax
08121340 +0x17c:  test   %al,%al
08121342 +0x17e:  je     0812139b <+0x1d7>
08121344 +0x180:  mov    0x8(%ebp),%eax
08121347 +0x183:  add    $0x34,%eax
0812134a +0x186:  movl   $0x306,0x18(%esp)
08121352 +0x18e:  mov    %eax,0x14(%esp)
08121356 +0x192:  movl   $"AccountDBMW DoReceive() Error!! Query(%s) line(%d)",0x10(%esp)
0812135e +0x19a:  movl   $0x306,0xc(%esp)
08121366 +0x1a2:  movl   $&_ZZN10DbmwClient4execEvE12__FUNCTION__,0x8(%esp)
0812136e +0x1aa:  movl   $"localchina/DbmwClient.cpp",0x4(%esp)
08121376 +0x1b2:  movl   $0x1,(%esp)
0812137d +0x1b9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08121382 +0x1be:  mov    0x8(%ebp),%eax
08121385 +0x1c1:  mov    %eax,(%esp)
08121388 +0x1c4:  call   08121156 <_ZN10DbmwClient9ReconnectEv>  ; DbmwClient::Reconnect()
0812138d +0x1c9:  xor    $0x1,%eax
08121390 +0x1cc:  test   %al,%al
08121392 +0x1ce:  je     0812139b <+0x1d7>
08121394 +0x1d0:  mov    $0x0,%eax
08121399 +0x1d5:  jmp    081213be <+0x1fa>
0812139b +0x1d7:  mov    $0x0,%eax
081213a0 +0x1dc:  jmp    081213be <+0x1fa>
081213a2 +0x1de:  cmpl   $0x1,-0xc(%ebp)
081213a6 +0x1e2:  jne    081213af <+0x1eb>
081213a8 +0x1e4:  mov    $0xfffffffe,%eax
081213ad +0x1e9:  jmp    081213be <+0x1fa>
081213af +0x1eb:  cmpl   $0x2,-0xc(%ebp)
081213b3 +0x1ef:  jne    081213bc <+0x1f8>
081213b5 +0x1f1:  mov    $0x1,%eax
081213ba +0x1f6:  jmp    081213be <+0x1fa>
081213bc +0x1f8:  jmp    081213be <+0x1fa>
081213be +0x1fa:  leave
081213bf +0x1fb:  ret
```

## 反编译 C

```c
// DbmwClient::exec @ 0x81211c4

/* DbmwClient::exec() */

int __thiscall DbmwClient::exec(DbmwClient *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  if (*this == (DbmwClient)0x0) {
    cVar2 = IsInitialized(this);
    if ((cVar2 == '\x01') && (cVar2 = IsConnected(this), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = Reconnect(this), cVar2 != '\x01')) {
      iVar3 = 0;
    }
    else {
      cVar2 = DoQuery(this);
      if (cVar2 == '\x01') {
        iVar3 = DoReceive(this);
        if (iVar3 == 0) {
          cVar2 = IsInitialized(this);
          if ((cVar2 == '\x01') && (cVar2 = IsConnected(this), cVar2 == '\x01')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            LogManager::logFormat
                      (1,"localchina/DbmwClient.cpp","exec",0x306,
                       "AccountDBMW DoReceive() Error!! Query(%s) line(%d)",this + 0x34,0x306);
            cVar2 = Reconnect(this);
            if (cVar2 != '\x01') {
              return 0;
            }
          }
          iVar3 = 0;
        }
        else if (iVar3 == 1) {
          iVar3 = -2;
        }
        else if (iVar3 == 2) {
          iVar3 = 1;
        }
      }
      else {
        cVar2 = IsInitialized(this);
        if ((cVar2 == '\x01') && (cVar2 = IsConnected(this), cVar2 == '\x01')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          LogManager::logFormat
                    (1,"localchina/DbmwClient.cpp","exec",0x2f4,
                     "AccountDBMW DoQuery() Error!! Query(%s) line(%d)",this + 0x34,0x2f4);
          cVar2 = Reconnect(this);
          if (cVar2 != '\x01') {
            return -1;
          }
          cVar2 = DoQuery(this);
          if (cVar2 != '\x01') {
            return -1;
          }
        }
        iVar3 = 0;
      }
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}
```
