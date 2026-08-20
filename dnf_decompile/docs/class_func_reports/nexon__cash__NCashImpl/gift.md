# gift

`_ZN5nexon4cash9NCashImpl4giftEyiiPKcS3_S3_S3_RNS0_13NXTransactionE`

`nexon::cash::NCashImpl::gift(unsigned long long, int, int, char const*, char const*, char const*, char const*, nexon::cash::NXTransaction&)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NCashImpl` | `0x081ad9c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ad9c4  _ZN5nexon4cash9NCashImpl4giftEyiiPKcS3_S3_S3_RNS0_13NXTransactionE
#           nexon::cash::NCashImpl::gift(unsigned long long, int, int, char const*, char const*, char const*, char const*, nexon::cash::NXTransaction&)
# range [0x081ad9c4, 0x081adbd3]
081ad9c4 +0x000:  push   %ebp
081ad9c5 +0x001:  mov    %esp,%ebp
081ad9c7 +0x003:  sub    $0x68,%esp
081ad9ca +0x006:  mov    0xc(%ebp),%eax
081ad9cd +0x009:  mov    %eax,-0x40(%ebp)
081ad9d0 +0x00c:  mov    0x10(%ebp),%eax
081ad9d3 +0x00f:  mov    %eax,-0x3c(%ebp)
081ad9d6 +0x012:  mov    0x8(%ebp),%eax
081ad9d9 +0x015:  mov    %eax,(%esp)
081ad9dc +0x018:  call   081ad080 <_ZN5nexon4cash9NCashImpl9reconnectEv>  ; nexon::cash::NCashImpl::reconnect()
081ad9e1 +0x01d:  xor    $0x1,%eax
081ad9e4 +0x020:  test   %al,%al
081ad9e6 +0x022:  je     081ad9f2 <+0x2e>
081ad9e8 +0x024:  mov    $0x2,%eax
081ad9ed +0x029:  jmp    081adbd1 <+0x20d>
081ad9f2 +0x02e:  lea    -0x1c(%ebp),%eax
081ad9f5 +0x031:  movl   $0x7,0xc(%esp)
081ad9fd +0x039:  movl   $0x0,0x8(%esp)
081ada05 +0x041:  mov    0x8(%ebp),%edx
081ada08 +0x044:  mov    %edx,0x4(%esp)
081ada0c +0x048:  mov    %eax,(%esp)
081ada0f +0x04b:  call   081ad0e6 <_ZN5nexon4cash9NCashImpl15set_data_headerEhh>  ; nexon::cash::NCashImpl::set_data_header(unsigned char, unsigned char)
081ada14 +0x050:  sub    $0x4,%esp
081ada17 +0x053:  mov    0x8(%ebp),%eax
081ada1a +0x056:  movzwl 0x4(%eax),%eax
081ada1e +0x05a:  cwtl
081ada1f +0x05b:  mov    %eax,0x4(%esp)
081ada23 +0x05f:  lea    -0x1c(%ebp),%eax
081ada26 +0x062:  mov    %eax,(%esp)
081ada29 +0x065:  call   081ae65e <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x14d>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x14d
081ada2e +0x06a:  mov    -0x40(%ebp),%eax
081ada31 +0x06d:  mov    -0x3c(%ebp),%edx
081ada34 +0x070:  mov    %eax,0x4(%esp)
081ada38 +0x074:  mov    %edx,0x8(%esp)
081ada3c +0x078:  lea    -0x1c(%ebp),%eax
081ada3f +0x07b:  mov    %eax,(%esp)
081ada42 +0x07e:  call   081ae7d4 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x2c3>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x2c3
081ada47 +0x083:  mov    0x14(%ebp),%eax
081ada4a +0x086:  mov    %eax,0x4(%esp)
081ada4e +0x08a:  lea    -0x1c(%ebp),%eax
081ada51 +0x08d:  mov    %eax,(%esp)
081ada54 +0x090:  call   081ae6c4 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x1b3>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x1b3
081ada59 +0x095:  mov    0x18(%ebp),%eax
081ada5c +0x098:  mov    %eax,0x4(%esp)
081ada60 +0x09c:  lea    -0x1c(%ebp),%eax
081ada63 +0x09f:  mov    %eax,(%esp)
081ada66 +0x0a2:  call   081ae6c4 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x1b3>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x1b3
081ada6b +0x0a7:  mov    0x1c(%ebp),%eax
081ada6e +0x0aa:  mov    %eax,0x4(%esp)
081ada72 +0x0ae:  lea    -0x1c(%ebp),%eax
081ada75 +0x0b1:  mov    %eax,(%esp)
081ada78 +0x0b4:  call   081acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>  ; nexon::cash::ByteBuffer::operator<<(char const*)
081ada7d +0x0b9:  mov    0x20(%ebp),%eax
081ada80 +0x0bc:  mov    %eax,0x4(%esp)
081ada84 +0x0c0:  lea    -0x1c(%ebp),%eax
081ada87 +0x0c3:  mov    %eax,(%esp)
081ada8a +0x0c6:  call   081acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>  ; nexon::cash::ByteBuffer::operator<<(char const*)
081ada8f +0x0cb:  mov    0x8(%ebp),%eax
081ada92 +0x0ce:  movzbl (%eax),%eax
081ada95 +0x0d1:  movzbl %al,%eax
081ada98 +0x0d4:  mov    %eax,0x4(%esp)
081ada9c +0x0d8:  lea    -0x1c(%ebp),%eax
081ada9f +0x0db:  mov    %eax,(%esp)
081adaa2 +0x0de:  call   081ae614 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x103>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x103
081adaa7 +0x0e3:  mov    0x8(%ebp),%eax
081adaaa +0x0e6:  movzwl 0x2(%eax),%eax
081adaae +0x0ea:  cwtl
081adaaf +0x0eb:  mov    %eax,0x4(%esp)
081adab3 +0x0ef:  lea    -0x1c(%ebp),%eax
081adab6 +0x0f2:  mov    %eax,(%esp)
081adab9 +0x0f5:  call   081ae65e <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x14d>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x14d
081adabe +0x0fa:  mov    0x24(%ebp),%eax
081adac1 +0x0fd:  mov    %eax,0x4(%esp)
081adac5 +0x101:  lea    -0x1c(%ebp),%eax
081adac8 +0x104:  mov    %eax,(%esp)
081adacb +0x107:  call   081acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>  ; nexon::cash::ByteBuffer::operator<<(char const*)
081adad0 +0x10c:  mov    0x28(%ebp),%eax
081adad3 +0x10f:  mov    %eax,0x4(%esp)
081adad7 +0x113:  lea    -0x1c(%ebp),%eax
081adada +0x116:  mov    %eax,(%esp)
081adadd +0x119:  call   081acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>  ; nexon::cash::ByteBuffer::operator<<(char const*)
081adae2 +0x11e:  movl   $0x0,-0xc(%ebp)
081adae9 +0x125:  lea    -0x1c(%ebp),%eax
081adaec +0x128:  mov    %eax,(%esp)
081adaef +0x12b:  call   081acf60 <_GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc+0x83>  ; global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)+0x83
081adaf4 +0x130:  mov    %eax,0x4(%esp)
081adaf8 +0x134:  mov    0x8(%ebp),%eax
081adafb +0x137:  mov    %eax,(%esp)
081adafe +0x13a:  call   081aec2c <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x71b>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x71b
081adb03 +0x13f:  mov    %eax,-0xc(%ebp)
081adb06 +0x142:  cmpl   $0x0,-0xc(%ebp)
081adb0a +0x146:  je     081adb14 <+0x150>
081adb0c +0x148:  mov    -0xc(%ebp),%eax
081adb0f +0x14b:  jmp    081adbd1 <+0x20d>
081adb14 +0x150:  mov    0x8(%ebp),%eax
081adb17 +0x153:  mov    %eax,(%esp)
081adb1a +0x156:  call   081aea46 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x535>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x535
081adb1f +0x15b:  mov    %eax,-0xc(%ebp)
081adb22 +0x15e:  cmpl   $0x0,-0xc(%ebp)
081adb26 +0x162:  je     081adb30 <+0x16c>
081adb28 +0x164:  mov    -0xc(%ebp),%eax
081adb2b +0x167:  jmp    081adbd1 <+0x20d>
081adb30 +0x16c:  lea    -0x34(%ebp),%eax
081adb33 +0x16f:  lea    -0x24(%ebp),%edx
081adb36 +0x172:  mov    %edx,0x10(%esp)
081adb3a +0x176:  lea    -0x1e(%ebp),%edx
081adb3d +0x179:  mov    %edx,0xc(%esp)
081adb41 +0x17d:  lea    -0x1d(%ebp),%edx
081adb44 +0x180:  mov    %edx,0x8(%esp)
081adb48 +0x184:  mov    0x8(%ebp),%edx
081adb4b +0x187:  mov    %edx,0x4(%esp)
081adb4f +0x18b:  mov    %eax,(%esp)
081adb52 +0x18e:  call   081ad168 <_ZN5nexon4cash9NCashImpl15get_data_headerERhS2_Rj>  ; nexon::cash::NCashImpl::get_data_header(unsigned char&, unsigned char&, unsigned int&)
081adb57 +0x193:  sub    $0x4,%esp
081adb5a +0x196:  movzbl -0x1e(%ebp),%eax
081adb5e +0x19a:  cmp    $0x2,%al
081adb60 +0x19c:  je     081adb7a <+0x1b6>
081adb62 +0x19e:  movzbl -0x1e(%ebp),%eax
081adb66 +0x1a2:  movzbl %al,%eax
081adb69 +0x1a5:  mov    %eax,0x4(%esp)
081adb6d +0x1a9:  mov    0x8(%ebp),%eax
081adb70 +0x1ac:  mov    %eax,(%esp)
081adb73 +0x1af:  call   081ad1e0 <_ZN5nexon4cash9NCashImpl17handle_cash_errorEi>  ; nexon::cash::NCashImpl::handle_cash_error(int)
081adb78 +0x1b4:  jmp    081adbd1 <+0x20d>
081adb7a +0x1b6:  mov    0x2c(%ebp),%eax
081adb7d +0x1b9:  mov    %eax,0x4(%esp)
081adb81 +0x1bd:  lea    -0x34(%ebp),%eax
081adb84 +0x1c0:  mov    %eax,(%esp)
081adb87 +0x1c3:  call   081ae8bc <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x3ab>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x3ab
081adb8c +0x1c8:  mov    0x2c(%ebp),%eax
081adb8f +0x1cb:  add    $0x4,%eax
081adb92 +0x1ce:  mov    %eax,0x4(%esp)
081adb96 +0x1d2:  lea    -0x34(%ebp),%eax
081adb99 +0x1d5:  mov    %eax,(%esp)
081adb9c +0x1d8:  call   081ae94e <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x43d>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x43d
081adba1 +0x1dd:  mov    0x2c(%ebp),%eax
081adba4 +0x1e0:  mov    0x4(%eax),%edx
081adba7 +0x1e3:  mov    0x2c(%ebp),%eax
081adbaa +0x1e6:  movzbl (%eax),%eax
081adbad +0x1e9:  movzbl %al,%eax
081adbb0 +0x1ec:  mov    %edx,0xc(%esp)
081adbb4 +0x1f0:  mov    %eax,0x8(%esp)
081adbb8 +0x1f4:  movl   $&_ZZN5nexon4cash9NCashImpl4giftEyiiPKcS3_S3_S3_RNS0_13NXTransactionEE12__FUNCTION__,0x4(%esp)
081adbc0 +0x1fc:  movl   $"[%s] PURCHASE OK, db_id: %u, transaction_id: %u\n",(%esp)
081adbc7 +0x203:  call   0807db60 <_init+0x458>
081adbcc +0x208:  mov    $0x0,%eax
081adbd1 +0x20d:  leave
081adbd2 +0x20e:  ret
081adbd3 +0x20f:  nop
```

## 反编译 C

```c
// nexon::cash::NCashImpl::gift @ 0x81ad9c4

/* nexon::cash::NCashImpl::gift(unsigned long long, int, int, char const*, char const*, char const*,
   char const*, nexon::cash::NXTransaction&) */

int nexon::cash::NCashImpl::gift
              (ulonglong param_1,int param_2,int param_3,char *param_4,char *param_5,char *param_6,
              char *param_7,NXTransaction *param_8)

{
  char cVar1;
  uint uVar2;
  byte *in_stack_00000028;
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
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_6);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),(uchar)*(NCashImpl *)param_1);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),*(short *)((NCashImpl *)param_1 + 2));
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_7);
    ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),(char *)param_8);
    local_10 = 0;
    uVar2 = ByteBuffer::length((ByteBuffer *)((int)&local_21 + 1));
    local_10 = send_msg((NCashImpl *)param_1,uVar2);
    if ((local_10 == 0) && (local_10 = recv_msg((NCashImpl *)param_1), local_10 == 0)) {
      puVar3 = local_28;
      get_data_header((uchar *)local_38,(uchar *)(NCashImpl *)param_1,&local_21);
      if (local_22 == 2) {
        ByteBuffer::operator>>(local_38,in_stack_00000028);
        ByteBuffer::operator>>(local_38,(uint *)(in_stack_00000028 + 4));
        printf("[%s] PURCHASE OK, db_id: %u, transaction_id: %u\n",0x7d,(uint)*in_stack_00000028,
               *(undefined4 *)(in_stack_00000028 + 4),puVar3);
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
