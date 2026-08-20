# checkEntrance

`_ZN5nexon4cash9NCashImpl13checkEntranceEPKcRc`

`nexon::cash::NCashImpl::checkEntrance(char const*, char&)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NCashImpl` | `0x081ad316` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ad316  _ZN5nexon4cash9NCashImpl13checkEntranceEPKcRc
#           nexon::cash::NCashImpl::checkEntrance(char const*, char&)
# range [0x081ad316, 0x081ad49d]
081ad316 +0x000:  push   %ebp
081ad317 +0x001:  mov    %esp,%ebp
081ad319 +0x003:  push   %ebx
081ad31a +0x004:  sub    $0x44,%esp
081ad31d +0x007:  mov    0x8(%ebp),%eax
081ad320 +0x00a:  mov    %eax,(%esp)
081ad323 +0x00d:  call   081ad080 <_ZN5nexon4cash9NCashImpl9reconnectEv>  ; nexon::cash::NCashImpl::reconnect()
081ad328 +0x012:  xor    $0x1,%eax
081ad32b +0x015:  test   %al,%al
081ad32d +0x017:  je     081ad339 <+0x23>
081ad32f +0x019:  mov    $0x2,%eax
081ad334 +0x01e:  jmp    081ad498 <+0x182>
081ad339 +0x023:  mov    0x8(%ebp),%eax
081ad33c +0x026:  movzwl 0x4(%eax),%eax
081ad340 +0x02a:  mov    %al,-0xd(%ebp)
081ad343 +0x02d:  mov    0x8(%ebp),%eax
081ad346 +0x030:  add    $0x248,%eax
081ad34b +0x035:  mov    %eax,(%esp)
081ad34e +0x038:  call   081ae560 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x4f>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x4f
081ad353 +0x03d:  movl   $0x200,0x8(%esp)
081ad35b +0x045:  mov    %eax,0x4(%esp)
081ad35f +0x049:  lea    -0x20(%ebp),%eax
081ad362 +0x04c:  mov    %eax,(%esp)
081ad365 +0x04f:  call   081ae9e2 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x4d1>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x4d1
081ad36a +0x054:  movl   $0x3,0x4(%esp)
081ad372 +0x05c:  lea    -0x20(%ebp),%eax
081ad375 +0x05f:  mov    %eax,(%esp)
081ad378 +0x062:  call   081ae614 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x103>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x103
081ad37d +0x067:  movl   $0x1,0x4(%esp)
081ad385 +0x06f:  lea    -0x20(%ebp),%eax
081ad388 +0x072:  mov    %eax,(%esp)
081ad38b +0x075:  call   081ae614 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x103>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x103
081ad390 +0x07a:  movzbl -0xd(%ebp),%eax
081ad394 +0x07e:  mov    %eax,0x4(%esp)
081ad398 +0x082:  lea    -0x20(%ebp),%eax
081ad39b +0x085:  mov    %eax,(%esp)
081ad39e +0x088:  call   081ae614 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x103>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x103
081ad3a3 +0x08d:  mov    0xc(%ebp),%eax
081ad3a6 +0x090:  mov    %eax,0x4(%esp)
081ad3aa +0x094:  lea    -0x20(%ebp),%eax
081ad3ad +0x097:  mov    %eax,(%esp)
081ad3b0 +0x09a:  call   081acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>  ; nexon::cash::ByteBuffer::operator<<(char const*)
081ad3b5 +0x09f:  mov    0x8(%ebp),%eax
081ad3b8 +0x0a2:  mov    %eax,(%esp)
081ad3bb +0x0a5:  call   081aea32 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x521>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x521
081ad3c0 +0x0aa:  movl   $0x0,-0xc(%ebp)
081ad3c7 +0x0b1:  lea    -0x20(%ebp),%eax
081ad3ca +0x0b4:  mov    %eax,(%esp)
081ad3cd +0x0b7:  call   081acf60 <_GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc+0x83>  ; global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)+0x83
081ad3d2 +0x0bc:  mov    %eax,0x4(%esp)
081ad3d6 +0x0c0:  mov    0x8(%ebp),%eax
081ad3d9 +0x0c3:  mov    %eax,(%esp)
081ad3dc +0x0c6:  call   081aec2c <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x71b>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x71b
081ad3e1 +0x0cb:  mov    %eax,-0xc(%ebp)
081ad3e4 +0x0ce:  cmpl   $0x0,-0xc(%ebp)
081ad3e8 +0x0d2:  je     081ad3f2 <+0xdc>
081ad3ea +0x0d4:  mov    -0xc(%ebp),%eax
081ad3ed +0x0d7:  jmp    081ad498 <+0x182>
081ad3f2 +0x0dc:  mov    0x8(%ebp),%eax
081ad3f5 +0x0df:  mov    %eax,(%esp)
081ad3f8 +0x0e2:  call   081aea46 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x535>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x535
081ad3fd +0x0e7:  mov    %eax,-0xc(%ebp)
081ad400 +0x0ea:  cmpl   $0x0,-0xc(%ebp)
081ad404 +0x0ee:  je     081ad40e <+0xf8>
081ad406 +0x0f0:  mov    -0xc(%ebp),%eax
081ad409 +0x0f3:  jmp    081ad498 <+0x182>
081ad40e +0x0f8:  mov    0x8(%ebp),%eax
081ad411 +0x0fb:  add    $0x40,%eax
081ad414 +0x0fe:  mov    %eax,(%esp)
081ad417 +0x101:  call   081ae56c <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x5b>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x5b
081ad41c +0x106:  movzwl %ax,%ebx
081ad41f +0x109:  mov    0x8(%ebp),%eax
081ad422 +0x10c:  add    $0x40,%eax
081ad425 +0x10f:  mov    %eax,(%esp)
081ad428 +0x112:  call   081ae560 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x4f>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x4f
081ad42d +0x117:  lea    -0x34(%ebp),%edx
081ad430 +0x11a:  mov    %ebx,0x8(%esp)
081ad434 +0x11e:  mov    %eax,0x4(%esp)
081ad438 +0x122:  mov    %edx,(%esp)
081ad43b +0x125:  call   081ae9b8 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x4a7>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x4a7
081ad440 +0x12a:  sub    $0x4,%esp
081ad443 +0x12d:  lea    -0x21(%ebp),%eax
081ad446 +0x130:  mov    %eax,0x4(%esp)
081ad44a +0x134:  lea    -0x34(%ebp),%eax
081ad44d +0x137:  mov    %eax,(%esp)
081ad450 +0x13a:  call   081ae8bc <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x3ab>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x3ab
081ad455 +0x13f:  lea    -0x22(%ebp),%eax
081ad458 +0x142:  mov    %eax,0x4(%esp)
081ad45c +0x146:  lea    -0x34(%ebp),%eax
081ad45f +0x149:  mov    %eax,(%esp)
081ad462 +0x14c:  call   081ae8bc <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x3ab>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x3ab
081ad467 +0x151:  movzbl -0x22(%ebp),%eax
081ad46b +0x155:  mov    %eax,%edx
081ad46d +0x157:  mov    0x10(%ebp),%eax
081ad470 +0x15a:  mov    %dl,(%eax)
081ad472 +0x15c:  mov    0x10(%ebp),%eax
081ad475 +0x15f:  movzbl (%eax),%eax
081ad478 +0x162:  movsbl %al,%eax
081ad47b +0x165:  mov    %eax,0x8(%esp)
081ad47f +0x169:  movl   $&_ZZN5nexon4cash9NCashImpl13checkEntranceEPKcRcE12__FUNCTION__,0x4(%esp)
081ad487 +0x171:  movl   $"[%s] CheckEntrace: %d\n",(%esp)
081ad48e +0x178:  call   0807db60 <_init+0x458>
081ad493 +0x17d:  mov    $0x0,%eax
081ad498 +0x182:  mov    -0x4(%ebp),%ebx
081ad49b +0x185:  leave
081ad49c +0x186:  ret
081ad49d +0x187:  nop
```

## 反编译 C

```c
// nexon::cash::NCashImpl::checkEntrance @ 0x81ad316

/* nexon::cash::NCashImpl::checkEntrance(char const*, char&) */

int __thiscall nexon::cash::NCashImpl::checkEntrance(NCashImpl *this,char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  ByteBuffer local_38 [18];
  uchar local_26;
  uchar local_25;
  ByteBuffer local_24 [19];
  uchar local_11;
  int local_10;
  
  cVar1 = reconnect(this);
  if (cVar1 == '\x01') {
    local_11 = (uchar)*(undefined2 *)(this + 4);
    pcVar2 = (char *)NCashMessage::body((NCashMessage *)(this + 0x248));
    ByteBuffer::ByteBuffer(local_24,pcVar2,0x200);
    ByteBuffer::operator<<(local_24,'\x03');
    ByteBuffer::operator<<(local_24,'\x01');
    ByteBuffer::operator<<(local_24,local_11);
    ByteBuffer::operator<<(local_24,param_1);
    _increaseRequestID(this);
    local_10 = 0;
    uVar3 = ByteBuffer::length(local_24);
    local_10 = send_msg(this,uVar3);
    if ((local_10 == 0) && (local_10 = recv_msg(this), local_10 == 0)) {
      uVar3 = NCashMessage::body_length((NCashMessage *)(this + 0x40));
      pcVar2 = (char *)NCashMessage::body((NCashMessage *)(this + 0x40));
      ByteBuffer::wrap(local_38,pcVar2,uVar3 & 0xffff);
      ByteBuffer::operator>>(local_38,&local_25);
      ByteBuffer::operator>>(local_38,&local_26);
      *param_2 = local_26;
      printf("[%s] CheckEntrace: %d\n","checkEntrance",(int)*param_2);
      local_10 = 0;
    }
  }
  else {
    local_10 = 2;
  }
  return local_10;
}
```
