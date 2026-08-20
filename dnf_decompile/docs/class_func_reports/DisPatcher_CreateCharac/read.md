# read

`_ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE`

`DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_CreateCharac` | `0x081c01ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c01ec  _ZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASE
#           DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&)
# range [0x081c01ec, 0x081c041d]
081c01ec +0x000:  push   %ebp
081c01ed +0x001:  mov    %esp,%ebp
081c01ef +0x003:  sub    $0x28,%esp
081c01f2 +0x006:  mov    0x10(%ebp),%eax
081c01f5 +0x009:  mov    %eax,-0xc(%ebp)
081c01f8 +0x00c:  movl   $0x30,0x8(%esp)
081c0200 +0x014:  movl   $0x0,0x4(%esp)
081c0208 +0x01c:  mov    -0xc(%ebp),%eax
081c020b +0x01f:  mov    %eax,(%esp)
081c020e +0x022:  call   0807dcc0 <_init+0x5b8>
081c0213 +0x027:  mov    -0xc(%ebp),%eax
081c0216 +0x02a:  add    $0xd,%eax
081c0219 +0x02d:  mov    %eax,0x4(%esp)
081c021d +0x031:  mov    0xc(%ebp),%eax
081c0220 +0x034:  mov    %eax,(%esp)
081c0223 +0x037:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c0228 +0x03c:  xor    $0x1,%eax
081c022b +0x03f:  test   %al,%al
081c022d +0x041:  je     081c0258 <+0x6c>
081c022f +0x043:  movl   $0x0,0xc(%esp)
081c0237 +0x04b:  movl   $0x0,0x8(%esp)
081c023f +0x053:  movl   $&_ZZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c0247 +0x05b:  movl   $0x749,(%esp)
081c024e +0x062:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c0253 +0x067:  jmp    081c041b <+0x22f>
081c0258 +0x06c:  mov    -0xc(%ebp),%eax
081c025b +0x06f:  movzbl 0xd(%eax),%eax
081c025f +0x073:  cmp    $0xb,%al
081c0261 +0x075:  jg     081c026e <+0x82>
081c0263 +0x077:  mov    -0xc(%ebp),%eax
081c0266 +0x07a:  movzbl 0xd(%eax),%eax
081c026a +0x07e:  test   %al,%al
081c026c +0x080:  jns    081c0297 <+0xab>
081c026e +0x082:  movl   $0x0,0xc(%esp)
081c0276 +0x08a:  movl   $0x0,0x8(%esp)
081c027e +0x092:  movl   $&_ZZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c0286 +0x09a:  movl   $0x74b,(%esp)
081c028d +0x0a1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c0292 +0x0a6:  jmp    081c041b <+0x22f>
081c0297 +0x0ab:  mov    -0xc(%ebp),%eax
081c029a +0x0ae:  movzbl 0xd(%eax),%eax
081c029e +0x0b2:  cmp    $0xb,%al
081c02a0 +0x0b4:  jne    081c02cb <+0xdf>
081c02a2 +0x0b6:  movl   $0x0,0xc(%esp)
081c02aa +0x0be:  movl   $0x0,0x8(%esp)
081c02b2 +0x0c6:  movl   $&_ZZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c02ba +0x0ce:  movl   $0x763,(%esp)
081c02c1 +0x0d5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c02c6 +0x0da:  jmp    081c041b <+0x22f>
081c02cb +0x0df:  mov    -0xc(%ebp),%eax
081c02ce +0x0e2:  add    $0xe,%eax
081c02d1 +0x0e5:  mov    %eax,0x4(%esp)
081c02d5 +0x0e9:  mov    0xc(%ebp),%eax
081c02d8 +0x0ec:  mov    %eax,(%esp)
081c02db +0x0ef:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081c02e0 +0x0f4:  xor    $0x1,%eax
081c02e3 +0x0f7:  test   %al,%al
081c02e5 +0x0f9:  je     081c0310 <+0x124>
081c02e7 +0x0fb:  movl   $0x0,0xc(%esp)
081c02ef +0x103:  movl   $0x0,0x8(%esp)
081c02f7 +0x10b:  movl   $&_ZZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c02ff +0x113:  movl   $0x766,(%esp)
081c0306 +0x11a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c030b +0x11f:  jmp    081c041b <+0x22f>
081c0310 +0x124:  mov    -0xc(%ebp),%eax
081c0313 +0x127:  mov    0xe(%eax),%eax
081c0316 +0x12a:  cmp    $0x3,%eax
081c0319 +0x12d:  jle    081c0326 <+0x13a>
081c031b +0x12f:  mov    -0xc(%ebp),%eax
081c031e +0x132:  mov    0xe(%eax),%eax
081c0321 +0x135:  cmp    $0x12,%eax
081c0324 +0x138:  jle    081c034f <+0x163>
081c0326 +0x13a:  movl   $0x0,0xc(%esp)
081c032e +0x142:  movl   $0x0,0x8(%esp)
081c0336 +0x14a:  movl   $&_ZZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c033e +0x152:  movl   $0x76a,(%esp)
081c0345 +0x159:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c034a +0x15e:  jmp    081c041b <+0x22f>
081c034f +0x163:  mov    -0xc(%ebp),%eax
081c0352 +0x166:  mov    0xe(%eax),%eax
081c0355 +0x169:  mov    -0xc(%ebp),%edx
081c0358 +0x16c:  add    $0x12,%edx
081c035b +0x16f:  mov    %eax,0xc(%esp)
081c035f +0x173:  movl   $0x1d,0x8(%esp)
081c0367 +0x17b:  mov    %edx,0x4(%esp)
081c036b +0x17f:  mov    0xc(%ebp),%eax
081c036e +0x182:  mov    %eax,(%esp)
081c0371 +0x185:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081c0376 +0x18a:  xor    $0x1,%eax
081c0379 +0x18d:  test   %al,%al
081c037b +0x18f:  je     081c03a3 <+0x1b7>
081c037d +0x191:  movl   $0x0,0xc(%esp)
081c0385 +0x199:  movl   $0x0,0x8(%esp)
081c038d +0x1a1:  movl   $&_ZZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c0395 +0x1a9:  movl   $0x76e,(%esp)
081c039c +0x1b0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c03a1 +0x1b5:  jmp    081c041b <+0x22f>
081c03a3 +0x1b7:  mov    -0xc(%ebp),%eax
081c03a6 +0x1ba:  add    $0x2f,%eax
081c03a9 +0x1bd:  mov    %eax,0x4(%esp)
081c03ad +0x1c1:  mov    0xc(%ebp),%eax
081c03b0 +0x1c4:  mov    %eax,(%esp)
081c03b3 +0x1c7:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c03b8 +0x1cc:  xor    $0x1,%eax
081c03bb +0x1cf:  test   %al,%al
081c03bd +0x1d1:  je     081c03e5 <+0x1f9>
081c03bf +0x1d3:  movl   $0x0,0xc(%esp)
081c03c7 +0x1db:  movl   $0x0,0x8(%esp)
081c03cf +0x1e3:  movl   $&_ZZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c03d7 +0x1eb:  movl   $0x780,(%esp)
081c03de +0x1f2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c03e3 +0x1f7:  jmp    081c041b <+0x22f>
081c03e5 +0x1f9:  mov    -0xc(%ebp),%eax
081c03e8 +0x1fc:  movzbl 0x2f(%eax),%eax
081c03ec +0x200:  test   %al,%al
081c03ee +0x202:  jns    081c0416 <+0x22a>
081c03f0 +0x204:  movl   $0x0,0xc(%esp)
081c03f8 +0x20c:  movl   $0x0,0x8(%esp)
081c0400 +0x214:  movl   $&_ZZN23DisPatcher_CreateCharac4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c0408 +0x21c:  movl   $0x782,(%esp)
081c040f +0x223:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c0414 +0x228:  jmp    081c041b <+0x22f>
081c0416 +0x22a:  mov    $0x0,%eax
081c041b +0x22f:  leave
081c041c +0x230:  ret
081c041d +0x231:  nop
```

## 反编译 C

```c
// DisPatcher_CreateCharac::read @ 0x81c01ec

/* DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_CreateCharac::read(DisPatcher_CreateCharac *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  memset(param_2,0,0x30);
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    if (((char)param_2[0xd] < '\f') && (-1 < (char)param_2[0xd])) {
      if (param_2[0xd] == (MSG_BASE)0xb) {
        uVar2 = LineFunc(0x763,"virtual int DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
      else {
        cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xe));
        if (cVar1 == '\x01') {
          if ((*(int *)(param_2 + 0xe) < 4) || (0x12 < *(int *)(param_2 + 0xe))) {
            uVar2 = LineFunc(0x76a,
                             "virtual int DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&)",0,0)
            ;
          }
          else {
            cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x12),0x1d,*(int *)(param_2 + 0xe)
                                      );
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x2f));
              if (cVar1 == '\x01') {
                if ((char)param_2[0x2f] < '\0') {
                  uVar2 = LineFunc(0x782,
                                   "virtual int DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&)"
                                   ,0,0);
                }
                else {
                  uVar2 = 0;
                }
              }
              else {
                uVar2 = LineFunc(0x780,
                                 "virtual int DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&)",
                                 0,0);
              }
            }
            else {
              uVar2 = LineFunc(0x76e,
                               "virtual int DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&)",0,
                               0);
            }
          }
        }
        else {
          uVar2 = LineFunc(0x766,"virtual int DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&)",
                           0,0);
        }
      }
    }
    else {
      uVar2 = LineFunc(0x74b,"virtual int DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x749,"virtual int DisPatcher_CreateCharac::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
