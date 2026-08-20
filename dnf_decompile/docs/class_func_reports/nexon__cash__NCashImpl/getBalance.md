# getBalance

`_ZN5nexon4cash9NCashImpl10getBalanceEPKcRi`

`nexon::cash::NCashImpl::getBalance(char const*, int&)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NCashImpl` | `0x081ad49e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ad49e  _ZN5nexon4cash9NCashImpl10getBalanceEPKcRi
#           nexon::cash::NCashImpl::getBalance(char const*, int&)
# range [0x081ad49e, 0x081ad5c1]
081ad49e +0x000:  push   %ebp
081ad49f +0x001:  mov    %esp,%ebp
081ad4a1 +0x003:  sub    $0x58,%esp
081ad4a4 +0x006:  mov    0x8(%ebp),%eax
081ad4a7 +0x009:  mov    %eax,(%esp)
081ad4aa +0x00c:  call   081ad080 <_ZN5nexon4cash9NCashImpl9reconnectEv>  ; nexon::cash::NCashImpl::reconnect()
081ad4af +0x011:  xor    $0x1,%eax
081ad4b2 +0x014:  test   %al,%al
081ad4b4 +0x016:  je     081ad4c0 <+0x22>
081ad4b6 +0x018:  mov    $0x2,%eax
081ad4bb +0x01d:  jmp    081ad5c0 <+0x122>
081ad4c0 +0x022:  lea    -0x1c(%ebp),%eax
081ad4c3 +0x025:  movl   $0x0,0xc(%esp)
081ad4cb +0x02d:  movl   $0x0,0x8(%esp)
081ad4d3 +0x035:  mov    0x8(%ebp),%edx
081ad4d6 +0x038:  mov    %edx,0x4(%esp)
081ad4da +0x03c:  mov    %eax,(%esp)
081ad4dd +0x03f:  call   081ad0e6 <_ZN5nexon4cash9NCashImpl15set_data_headerEhh>  ; nexon::cash::NCashImpl::set_data_header(unsigned char, unsigned char)
081ad4e2 +0x044:  sub    $0x4,%esp
081ad4e5 +0x047:  mov    0xc(%ebp),%eax
081ad4e8 +0x04a:  mov    %eax,0x4(%esp)
081ad4ec +0x04e:  lea    -0x1c(%ebp),%eax
081ad4ef +0x051:  mov    %eax,(%esp)
081ad4f2 +0x054:  call   081acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>  ; nexon::cash::ByteBuffer::operator<<(char const*)
081ad4f7 +0x059:  movl   $0x0,-0xc(%ebp)
081ad4fe +0x060:  lea    -0x1c(%ebp),%eax
081ad501 +0x063:  mov    %eax,(%esp)
081ad504 +0x066:  call   081acf60 <_GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc+0x83>  ; global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)+0x83
081ad509 +0x06b:  mov    %eax,0x4(%esp)
081ad50d +0x06f:  mov    0x8(%ebp),%eax
081ad510 +0x072:  mov    %eax,(%esp)
081ad513 +0x075:  call   081aec2c <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x71b>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x71b
081ad518 +0x07a:  mov    %eax,-0xc(%ebp)
081ad51b +0x07d:  cmpl   $0x0,-0xc(%ebp)
081ad51f +0x081:  je     081ad529 <+0x8b>
081ad521 +0x083:  mov    -0xc(%ebp),%eax
081ad524 +0x086:  jmp    081ad5c0 <+0x122>
081ad529 +0x08b:  mov    0x8(%ebp),%eax
081ad52c +0x08e:  mov    %eax,(%esp)
081ad52f +0x091:  call   081aea46 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x535>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x535
081ad534 +0x096:  mov    %eax,-0xc(%ebp)
081ad537 +0x099:  cmpl   $0x0,-0xc(%ebp)
081ad53b +0x09d:  je     081ad542 <+0xa4>
081ad53d +0x09f:  mov    -0xc(%ebp),%eax
081ad540 +0x0a2:  jmp    081ad5c0 <+0x122>
081ad542 +0x0a4:  lea    -0x34(%ebp),%eax
081ad545 +0x0a7:  lea    -0x24(%ebp),%edx
081ad548 +0x0aa:  mov    %edx,0x10(%esp)
081ad54c +0x0ae:  lea    -0x1e(%ebp),%edx
081ad54f +0x0b1:  mov    %edx,0xc(%esp)
081ad553 +0x0b5:  lea    -0x1d(%ebp),%edx
081ad556 +0x0b8:  mov    %edx,0x8(%esp)
081ad55a +0x0bc:  mov    0x8(%ebp),%edx
081ad55d +0x0bf:  mov    %edx,0x4(%esp)
081ad561 +0x0c3:  mov    %eax,(%esp)
081ad564 +0x0c6:  call   081ad168 <_ZN5nexon4cash9NCashImpl15get_data_headerERhS2_Rj>  ; nexon::cash::NCashImpl::get_data_header(unsigned char&, unsigned char&, unsigned int&)
081ad569 +0x0cb:  sub    $0x4,%esp
081ad56c +0x0ce:  movzbl -0x1e(%ebp),%eax
081ad570 +0x0d2:  test   %al,%al
081ad572 +0x0d4:  je     081ad58c <+0xee>
081ad574 +0x0d6:  movzbl -0x1e(%ebp),%eax
081ad578 +0x0da:  movzbl %al,%eax
081ad57b +0x0dd:  mov    %eax,0x4(%esp)
081ad57f +0x0e1:  mov    0x8(%ebp),%eax
081ad582 +0x0e4:  mov    %eax,(%esp)
081ad585 +0x0e7:  call   081ad1e0 <_ZN5nexon4cash9NCashImpl17handle_cash_errorEi>  ; nexon::cash::NCashImpl::handle_cash_error(int)
081ad58a +0x0ec:  jmp    081ad5c0 <+0x122>
081ad58c +0x0ee:  mov    0x10(%ebp),%eax
081ad58f +0x0f1:  mov    %eax,0x4(%esp)
081ad593 +0x0f5:  lea    -0x34(%ebp),%eax
081ad596 +0x0f8:  mov    %eax,(%esp)
081ad599 +0x0fb:  call   081ae8e4 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x3d3>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x3d3
081ad59e +0x100:  mov    0x10(%ebp),%eax
081ad5a1 +0x103:  mov    (%eax),%eax
081ad5a3 +0x105:  mov    %eax,0x8(%esp)
081ad5a7 +0x109:  movl   $&_ZZN5nexon4cash9NCashImpl10getBalanceEPKcRiE12__FUNCTION__,0x4(%esp)
081ad5af +0x111:  movl   $"[%s] Remain cash: %d\n",(%esp)
081ad5b6 +0x118:  call   0807db60 <_init+0x458>
081ad5bb +0x11d:  mov    $0x0,%eax
081ad5c0 +0x122:  leave
081ad5c1 +0x123:  ret
```

## 反编译 C

```c
// nexon::cash::NCashImpl::getBalance @ 0x81ad49e

/* nexon::cash::NCashImpl::getBalance(char const*, int&) */

int __thiscall nexon::cash::NCashImpl::getBalance(NCashImpl *this,char *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  ByteBuffer local_38 [16];
  undefined1 local_28 [6];
  byte local_22;
  undefined4 local_21;
  int local_10;
  
  cVar1 = reconnect(this);
  if (cVar1 == '\x01') {
    set_data_header((char)&local_21 + '\x01',(uchar)this);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_1);
    local_10 = 0;
    uVar2 = ByteBuffer::length((ByteBuffer *)((int)&local_21 + 1));
    local_10 = send_msg(this,uVar2);
    if ((local_10 == 0) && (local_10 = recv_msg(this), local_10 == 0)) {
      puVar4 = local_28;
      pbVar3 = &local_22;
      get_data_header((uchar *)local_38,(uchar *)this,&local_21);
      if (local_22 == 0) {
        ByteBuffer::operator>>(local_38,param_2);
        printf("[%s] Remain cash: %d\n","getBalance",*param_2,pbVar3,puVar4);
        local_10 = 0;
      }
      else {
        local_10 = handle_cash_error(this,(uint)local_22);
      }
    }
  }
  else {
    local_10 = 2;
  }
  return local_10;
}
```
