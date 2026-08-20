# purchase

`_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionE`

`nexon::cash::NCashImpl::purchase(unsigned long long, int, int, char const*, char const*, nexon::cash::NXTransaction&)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NCashImpl` | `0x081ad5c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ad5c2  _ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionE
#           nexon::cash::NCashImpl::purchase(unsigned long long, int, int, char const*, char const*, nexon::cash::NXTransaction&)
# range [0x081ad5c2, 0x081ad7ad]
081ad5c2 +0x000:  push   %ebp
081ad5c3 +0x001:  mov    %esp,%ebp
081ad5c5 +0x003:  sub    $0x68,%esp
081ad5c8 +0x006:  mov    0xc(%ebp),%eax
081ad5cb +0x009:  mov    %eax,-0x40(%ebp)
081ad5ce +0x00c:  mov    0x10(%ebp),%eax
081ad5d1 +0x00f:  mov    %eax,-0x3c(%ebp)
081ad5d4 +0x012:  mov    0x8(%ebp),%eax
081ad5d7 +0x015:  mov    %eax,(%esp)
081ad5da +0x018:  call   081ad080 <_ZN5nexon4cash9NCashImpl9reconnectEv>  ; nexon::cash::NCashImpl::reconnect()
081ad5df +0x01d:  xor    $0x1,%eax
081ad5e2 +0x020:  test   %al,%al
081ad5e4 +0x022:  je     081ad5f0 <+0x2e>
081ad5e6 +0x024:  mov    $0x2,%eax
081ad5eb +0x029:  jmp    081ad7ab <+0x1e9>
081ad5f0 +0x02e:  lea    -0x1c(%ebp),%eax
081ad5f3 +0x031:  movl   $0x1,0xc(%esp)
081ad5fb +0x039:  movl   $0x0,0x8(%esp)
081ad603 +0x041:  mov    0x8(%ebp),%edx
081ad606 +0x044:  mov    %edx,0x4(%esp)
081ad60a +0x048:  mov    %eax,(%esp)
081ad60d +0x04b:  call   081ad0e6 <_ZN5nexon4cash9NCashImpl15set_data_headerEhh>  ; nexon::cash::NCashImpl::set_data_header(unsigned char, unsigned char)
081ad612 +0x050:  sub    $0x4,%esp
081ad615 +0x053:  mov    0x8(%ebp),%eax
081ad618 +0x056:  movzwl 0x4(%eax),%eax
081ad61c +0x05a:  cwtl
081ad61d +0x05b:  mov    %eax,0x4(%esp)
081ad621 +0x05f:  lea    -0x1c(%ebp),%eax
081ad624 +0x062:  mov    %eax,(%esp)
081ad627 +0x065:  call   081ae65e <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x14d>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x14d
081ad62c +0x06a:  mov    -0x40(%ebp),%eax
081ad62f +0x06d:  mov    -0x3c(%ebp),%edx
081ad632 +0x070:  mov    %eax,0x4(%esp)
081ad636 +0x074:  mov    %edx,0x8(%esp)
081ad63a +0x078:  lea    -0x1c(%ebp),%eax
081ad63d +0x07b:  mov    %eax,(%esp)
081ad640 +0x07e:  call   081ae7d4 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x2c3>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x2c3
081ad645 +0x083:  mov    0x14(%ebp),%eax
081ad648 +0x086:  mov    %eax,0x4(%esp)
081ad64c +0x08a:  lea    -0x1c(%ebp),%eax
081ad64f +0x08d:  mov    %eax,(%esp)
081ad652 +0x090:  call   081ae6c4 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x1b3>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x1b3
081ad657 +0x095:  mov    0x18(%ebp),%eax
081ad65a +0x098:  mov    %eax,0x4(%esp)
081ad65e +0x09c:  lea    -0x1c(%ebp),%eax
081ad661 +0x09f:  mov    %eax,(%esp)
081ad664 +0x0a2:  call   081ae6c4 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x1b3>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x1b3
081ad669 +0x0a7:  mov    0x1c(%ebp),%eax
081ad66c +0x0aa:  mov    %eax,0x4(%esp)
081ad670 +0x0ae:  lea    -0x1c(%ebp),%eax
081ad673 +0x0b1:  mov    %eax,(%esp)
081ad676 +0x0b4:  call   081acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>  ; nexon::cash::ByteBuffer::operator<<(char const*)
081ad67b +0x0b9:  mov    0x20(%ebp),%eax
081ad67e +0x0bc:  mov    %eax,0x4(%esp)
081ad682 +0x0c0:  lea    -0x1c(%ebp),%eax
081ad685 +0x0c3:  mov    %eax,(%esp)
081ad688 +0x0c6:  call   081acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>  ; nexon::cash::ByteBuffer::operator<<(char const*)
081ad68d +0x0cb:  mov    0x8(%ebp),%eax
081ad690 +0x0ce:  movzbl (%eax),%eax
081ad693 +0x0d1:  movzbl %al,%eax
081ad696 +0x0d4:  mov    %eax,0x4(%esp)
081ad69a +0x0d8:  lea    -0x1c(%ebp),%eax
081ad69d +0x0db:  mov    %eax,(%esp)
081ad6a0 +0x0de:  call   081ae614 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x103>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x103
081ad6a5 +0x0e3:  mov    0x8(%ebp),%eax
081ad6a8 +0x0e6:  movzwl 0x2(%eax),%eax
081ad6ac +0x0ea:  cwtl
081ad6ad +0x0eb:  mov    %eax,0x4(%esp)
081ad6b1 +0x0ef:  lea    -0x1c(%ebp),%eax
081ad6b4 +0x0f2:  mov    %eax,(%esp)
081ad6b7 +0x0f5:  call   081ae65e <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x14d>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x14d
081ad6bc +0x0fa:  movl   $0x0,-0xc(%ebp)
081ad6c3 +0x101:  lea    -0x1c(%ebp),%eax
081ad6c6 +0x104:  mov    %eax,(%esp)
081ad6c9 +0x107:  call   081acf60 <_GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc+0x83>  ; global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)+0x83
081ad6ce +0x10c:  mov    %eax,0x4(%esp)
081ad6d2 +0x110:  mov    0x8(%ebp),%eax
081ad6d5 +0x113:  mov    %eax,(%esp)
081ad6d8 +0x116:  call   081aec2c <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x71b>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x71b
081ad6dd +0x11b:  mov    %eax,-0xc(%ebp)
081ad6e0 +0x11e:  cmpl   $0x0,-0xc(%ebp)
081ad6e4 +0x122:  je     081ad6ee <+0x12c>
081ad6e6 +0x124:  mov    -0xc(%ebp),%eax
081ad6e9 +0x127:  jmp    081ad7ab <+0x1e9>
081ad6ee +0x12c:  mov    0x8(%ebp),%eax
081ad6f1 +0x12f:  mov    %eax,(%esp)
081ad6f4 +0x132:  call   081aea46 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x535>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x535
081ad6f9 +0x137:  mov    %eax,-0xc(%ebp)
081ad6fc +0x13a:  cmpl   $0x0,-0xc(%ebp)
081ad700 +0x13e:  je     081ad70a <+0x148>
081ad702 +0x140:  mov    -0xc(%ebp),%eax
081ad705 +0x143:  jmp    081ad7ab <+0x1e9>
081ad70a +0x148:  lea    -0x34(%ebp),%eax
081ad70d +0x14b:  lea    -0x24(%ebp),%edx
081ad710 +0x14e:  mov    %edx,0x10(%esp)
081ad714 +0x152:  lea    -0x1e(%ebp),%edx
081ad717 +0x155:  mov    %edx,0xc(%esp)
081ad71b +0x159:  lea    -0x1d(%ebp),%edx
081ad71e +0x15c:  mov    %edx,0x8(%esp)
081ad722 +0x160:  mov    0x8(%ebp),%edx
081ad725 +0x163:  mov    %edx,0x4(%esp)
081ad729 +0x167:  mov    %eax,(%esp)
081ad72c +0x16a:  call   081ad168 <_ZN5nexon4cash9NCashImpl15get_data_headerERhS2_Rj>  ; nexon::cash::NCashImpl::get_data_header(unsigned char&, unsigned char&, unsigned int&)
081ad731 +0x16f:  sub    $0x4,%esp
081ad734 +0x172:  movzbl -0x1e(%ebp),%eax
081ad738 +0x176:  cmp    $0x2,%al
081ad73a +0x178:  je     081ad754 <+0x192>
081ad73c +0x17a:  movzbl -0x1e(%ebp),%eax
081ad740 +0x17e:  movzbl %al,%eax
081ad743 +0x181:  mov    %eax,0x4(%esp)
081ad747 +0x185:  mov    0x8(%ebp),%eax
081ad74a +0x188:  mov    %eax,(%esp)
081ad74d +0x18b:  call   081ad1e0 <_ZN5nexon4cash9NCashImpl17handle_cash_errorEi>  ; nexon::cash::NCashImpl::handle_cash_error(int)
081ad752 +0x190:  jmp    081ad7ab <+0x1e9>
081ad754 +0x192:  mov    0x24(%ebp),%eax
081ad757 +0x195:  mov    %eax,0x4(%esp)
081ad75b +0x199:  lea    -0x34(%ebp),%eax
081ad75e +0x19c:  mov    %eax,(%esp)
081ad761 +0x19f:  call   081ae8bc <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x3ab>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x3ab
081ad766 +0x1a4:  mov    0x24(%ebp),%eax
081ad769 +0x1a7:  add    $0x4,%eax
081ad76c +0x1aa:  mov    %eax,0x4(%esp)
081ad770 +0x1ae:  lea    -0x34(%ebp),%eax
081ad773 +0x1b1:  mov    %eax,(%esp)
081ad776 +0x1b4:  call   081ae94e <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x43d>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x43d
081ad77b +0x1b9:  mov    0x24(%ebp),%eax
081ad77e +0x1bc:  mov    0x4(%eax),%edx
081ad781 +0x1bf:  mov    0x24(%ebp),%eax
081ad784 +0x1c2:  movzbl (%eax),%eax
081ad787 +0x1c5:  movzbl %al,%eax
081ad78a +0x1c8:  mov    %edx,0xc(%esp)
081ad78e +0x1cc:  mov    %eax,0x8(%esp)
081ad792 +0x1d0:  movl   $&_ZZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionEE12__FUNCTION__,0x4(%esp)
081ad79a +0x1d8:  movl   $"[%s] PURCHASE OK, db_id: %u, transaction_id: %u\n",(%esp)
081ad7a1 +0x1df:  call   0807db60 <_init+0x458>
081ad7a6 +0x1e4:  mov    $0x0,%eax
081ad7ab +0x1e9:  leave
081ad7ac +0x1ea:  ret
081ad7ad +0x1eb:  nop
```

## 反编译 C

```c
// nexon::cash::NCashImpl::purchase @ 0x81ad5c2

/* nexon::cash::NCashImpl::purchase(unsigned long long, int, int, char const*, char const*,
   nexon::cash::NXTransaction&) */

int nexon::cash::NCashImpl::purchase
              (ulonglong param_1,int param_2,int param_3,char *param_4,char *param_5,
              NXTransaction *param_6)

{
  char cVar1;
  uint uVar2;
  byte *in_stack_00000020;
  undefined1 *puVar3;
  ByteBuffer local_38 [16];
  undefined1 local_28 [6];
  byte local_22;
  undefined4 local_21;
  int local_10;
  
  cVar1 = reconnect((NCashImpl *)param_1);
  if (cVar1 == '\x01') {
    set_data_header((char)&local_21 + '\x01',(uchar)param_1);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),*(short *)((NCashImpl *)param_1 + 4));
    ByteBuffer::operator<<
              ((ByteBuffer *)((int)&local_21 + 1),CONCAT44(param_2,(int)(param_1 >> 0x20)));
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_3);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),(int)param_4);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_5);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),(char *)param_6);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),(uchar)*(NCashImpl *)param_1);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),*(short *)((NCashImpl *)param_1 + 2));
    local_10 = 0;
    uVar2 = ByteBuffer::length((ByteBuffer *)((int)&local_21 + 1));
    local_10 = send_msg((NCashImpl *)param_1,uVar2);
    if ((local_10 == 0) && (local_10 = recv_msg((NCashImpl *)param_1), local_10 == 0)) {
      puVar3 = local_28;
      get_data_header((uchar *)local_38,(uchar *)(NCashImpl *)param_1,&local_21);
      if (local_22 == 2) {
        ByteBuffer::operator>>(local_38,in_stack_00000020);
        ByteBuffer::operator>>(local_38,(uint *)(in_stack_00000020 + 4));
        printf("[%s] PURCHASE OK, db_id: %u, transaction_id: %u\n",0x8b,(uint)*in_stack_00000020,
               *(undefined4 *)(in_stack_00000020 + 4),puVar3);
        local_10 = 0;
      }
      else {
        local_10 = handle_cash_error((NCashImpl *)param_1,(uint)local_22);
      }
    }
  }
  else {
    local_10 = 2;
  }
  return local_10;
}
```
