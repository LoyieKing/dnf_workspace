# read

`_ZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASE`

`DisPatcher_SetArea::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetArea` | `0x081c91e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c91e6  _ZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASE
#           DisPatcher_SetArea::read(PacketBuf&, MSG_BASE&)
# range [0x081c91e6, 0x081c93e7]
081c91e6 +0x000:  push   %ebp
081c91e7 +0x001:  mov    %esp,%ebp
081c91e9 +0x003:  sub    $0x28,%esp
081c91ec +0x006:  mov    0x10(%ebp),%eax
081c91ef +0x009:  mov    %eax,-0xc(%ebp)
081c91f2 +0x00c:  mov    -0xc(%ebp),%eax
081c91f5 +0x00f:  add    $0xd,%eax
081c91f8 +0x012:  mov    %eax,0x4(%esp)
081c91fc +0x016:  mov    0xc(%ebp),%eax
081c91ff +0x019:  mov    %eax,(%esp)
081c9202 +0x01c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c9207 +0x021:  xor    $0x1,%eax
081c920a +0x024:  test   %al,%al
081c920c +0x026:  je     081c9237 <+0x51>
081c920e +0x028:  movl   $0x0,0xc(%esp)
081c9216 +0x030:  movl   $0x0,0x8(%esp)
081c921e +0x038:  movl   $&_ZZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c9226 +0x040:  movl   $0x1c16,(%esp)
081c922d +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c9232 +0x04c:  jmp    081c93e6 <+0x200>
081c9237 +0x051:  mov    -0xc(%ebp),%eax
081c923a +0x054:  add    $0xe,%eax
081c923d +0x057:  mov    %eax,0x4(%esp)
081c9241 +0x05b:  mov    0xc(%ebp),%eax
081c9244 +0x05e:  mov    %eax,(%esp)
081c9247 +0x061:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c924c +0x066:  xor    $0x1,%eax
081c924f +0x069:  test   %al,%al
081c9251 +0x06b:  je     081c927c <+0x96>
081c9253 +0x06d:  movl   $0x0,0xc(%esp)
081c925b +0x075:  movl   $0x0,0x8(%esp)
081c9263 +0x07d:  movl   $&_ZZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c926b +0x085:  movl   $0x1c17,(%esp)
081c9272 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c9277 +0x091:  jmp    081c93e6 <+0x200>
081c927c +0x096:  mov    -0xc(%ebp),%eax
081c927f +0x099:  add    $0xf,%eax
081c9282 +0x09c:  mov    %eax,0x4(%esp)
081c9286 +0x0a0:  mov    0xc(%ebp),%eax
081c9289 +0x0a3:  mov    %eax,(%esp)
081c928c +0x0a6:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c9291 +0x0ab:  xor    $0x1,%eax
081c9294 +0x0ae:  test   %al,%al
081c9296 +0x0b0:  je     081c92c1 <+0xdb>
081c9298 +0x0b2:  movl   $0x0,0xc(%esp)
081c92a0 +0x0ba:  movl   $0x0,0x8(%esp)
081c92a8 +0x0c2:  movl   $&_ZZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c92b0 +0x0ca:  movl   $0x1c18,(%esp)
081c92b7 +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c92bc +0x0d6:  jmp    081c93e6 <+0x200>
081c92c1 +0x0db:  mov    -0xc(%ebp),%eax
081c92c4 +0x0de:  add    $0x11,%eax
081c92c7 +0x0e1:  mov    %eax,0x4(%esp)
081c92cb +0x0e5:  mov    0xc(%ebp),%eax
081c92ce +0x0e8:  mov    %eax,(%esp)
081c92d1 +0x0eb:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c92d6 +0x0f0:  xor    $0x1,%eax
081c92d9 +0x0f3:  test   %al,%al
081c92db +0x0f5:  je     081c9306 <+0x120>
081c92dd +0x0f7:  movl   $0x0,0xc(%esp)
081c92e5 +0x0ff:  movl   $0x0,0x8(%esp)
081c92ed +0x107:  movl   $&_ZZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c92f5 +0x10f:  movl   $0x1c19,(%esp)
081c92fc +0x116:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c9301 +0x11b:  jmp    081c93e6 <+0x200>
081c9306 +0x120:  mov    -0xc(%ebp),%eax
081c9309 +0x123:  add    $0x13,%eax
081c930c +0x126:  mov    %eax,0x4(%esp)
081c9310 +0x12a:  mov    0xc(%ebp),%eax
081c9313 +0x12d:  mov    %eax,(%esp)
081c9316 +0x130:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c931b +0x135:  xor    $0x1,%eax
081c931e +0x138:  test   %al,%al
081c9320 +0x13a:  je     081c934b <+0x165>
081c9322 +0x13c:  movl   $0x0,0xc(%esp)
081c932a +0x144:  movl   $0x0,0x8(%esp)
081c9332 +0x14c:  movl   $&_ZZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c933a +0x154:  movl   $0x1c1a,(%esp)
081c9341 +0x15b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c9346 +0x160:  jmp    081c93e6 <+0x200>
081c934b +0x165:  mov    -0xc(%ebp),%eax
081c934e +0x168:  movw   $0x0,0x14(%eax)
081c9354 +0x16e:  mov    -0xc(%ebp),%eax
081c9357 +0x171:  movw   $0x0,0x16(%eax)
081c935d +0x177:  mov    -0xc(%ebp),%eax
081c9360 +0x17a:  add    $0x14,%eax
081c9363 +0x17d:  mov    %eax,0x4(%esp)
081c9367 +0x181:  mov    0xc(%ebp),%eax
081c936a +0x184:  mov    %eax,(%esp)
081c936d +0x187:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c9372 +0x18c:  xor    $0x1,%eax
081c9375 +0x18f:  test   %al,%al
081c9377 +0x191:  je     081c939f <+0x1b9>
081c9379 +0x193:  movl   $0x0,0xc(%esp)
081c9381 +0x19b:  movl   $0x0,0x8(%esp)
081c9389 +0x1a3:  movl   $&_ZZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c9391 +0x1ab:  movl   $0x1c1f,(%esp)
081c9398 +0x1b2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c939d +0x1b7:  jmp    081c93e6 <+0x200>
081c939f +0x1b9:  mov    -0xc(%ebp),%eax
081c93a2 +0x1bc:  add    $0x16,%eax
081c93a5 +0x1bf:  mov    %eax,0x4(%esp)
081c93a9 +0x1c3:  mov    0xc(%ebp),%eax
081c93ac +0x1c6:  mov    %eax,(%esp)
081c93af +0x1c9:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c93b4 +0x1ce:  xor    $0x1,%eax
081c93b7 +0x1d1:  test   %al,%al
081c93b9 +0x1d3:  je     081c93e1 <+0x1fb>
081c93bb +0x1d5:  movl   $0x0,0xc(%esp)
081c93c3 +0x1dd:  movl   $0x0,0x8(%esp)
081c93cb +0x1e5:  movl   $&_ZZN18DisPatcher_SetArea4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c93d3 +0x1ed:  movl   $0x1c20,(%esp)
081c93da +0x1f4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c93df +0x1f9:  jmp    081c93e6 <+0x200>
081c93e1 +0x1fb:  mov    $0x0,%eax
081c93e6 +0x200:  leave
081c93e7 +0x201:  ret
```

## 反编译 C

```c
// DisPatcher_SetArea::read @ 0x81c91e6

/* DisPatcher_SetArea::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_SetArea::read(DisPatcher_SetArea *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xf));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x11));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x13));
          if (cVar1 == '\x01') {
            *(undefined2 *)(param_2 + 0x14) = 0;
            *(undefined2 *)(param_2 + 0x16) = 0;
            cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x14));
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x16));
              if (cVar1 == '\x01') {
                uVar2 = 0;
              }
              else {
                uVar2 = LineFunc(0x1c20,
                                 "virtual int DisPatcher_SetArea::read(PacketBuf&, MSG_BASE&)",0,0);
              }
            }
            else {
              uVar2 = LineFunc(0x1c1f,"virtual int DisPatcher_SetArea::read(PacketBuf&, MSG_BASE&)",
                               0,0);
            }
          }
          else {
            uVar2 = LineFunc(0x1c1a,"virtual int DisPatcher_SetArea::read(PacketBuf&, MSG_BASE&)",0,
                             0);
          }
        }
        else {
          uVar2 = LineFunc(0x1c19,"virtual int DisPatcher_SetArea::read(PacketBuf&, MSG_BASE&)",0,0)
          ;
        }
      }
      else {
        uVar2 = LineFunc(0x1c18,"virtual int DisPatcher_SetArea::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x1c17,"virtual int DisPatcher_SetArea::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x1c16,"virtual int DisPatcher_SetArea::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
