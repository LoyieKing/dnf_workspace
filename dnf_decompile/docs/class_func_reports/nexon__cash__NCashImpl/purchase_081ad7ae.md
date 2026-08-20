# purchase

`_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionEs`

`nexon::cash::NCashImpl::purchase(unsigned long long, int, int, char const*, char const*, nexon::cash::NXTransaction&, short)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NCashImpl` | `0x081ad7ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ad7ae  _ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionEs
#           nexon::cash::NCashImpl::purchase(unsigned long long, int, int, char const*, char const*, nexon::cash::NXTransaction&, short)
# range [0x081ad7ae, 0x081ad9c3]
081ad7ae +0x000:  push   %ebp
081ad7af +0x001:  mov    %esp,%ebp
081ad7b1 +0x003:  sub    $0x68,%esp
081ad7b4 +0x006:  mov    0x28(%ebp),%eax
081ad7b7 +0x009:  mov    0xc(%ebp),%edx
081ad7ba +0x00c:  mov    %edx,-0x40(%ebp)
081ad7bd +0x00f:  mov    0x10(%ebp),%edx
081ad7c0 +0x012:  mov    %edx,-0x3c(%ebp)
081ad7c3 +0x015:  mov    %ax,-0x44(%ebp)
081ad7c7 +0x019:  mov    0x8(%ebp),%eax
081ad7ca +0x01c:  mov    %eax,(%esp)
081ad7cd +0x01f:  call   081ad080 <_ZN5nexon4cash9NCashImpl9reconnectEv>  ; nexon::cash::NCashImpl::reconnect()
081ad7d2 +0x024:  xor    $0x1,%eax
081ad7d5 +0x027:  test   %al,%al
081ad7d7 +0x029:  je     081ad7e3 <+0x35>
081ad7d9 +0x02b:  mov    $0x2,%eax
081ad7de +0x030:  jmp    081ad9c1 <+0x213>
081ad7e3 +0x035:  lea    -0x1c(%ebp),%eax
081ad7e6 +0x038:  movl   $0x1,0xc(%esp)
081ad7ee +0x040:  movl   $0x0,0x8(%esp)
081ad7f6 +0x048:  mov    0x8(%ebp),%edx
081ad7f9 +0x04b:  mov    %edx,0x4(%esp)
081ad7fd +0x04f:  mov    %eax,(%esp)
081ad800 +0x052:  call   081ad0e6 <_ZN5nexon4cash9NCashImpl15set_data_headerEhh>  ; nexon::cash::NCashImpl::set_data_header(unsigned char, unsigned char)
081ad805 +0x057:  sub    $0x4,%esp
081ad808 +0x05a:  cmpw   $0x3c,-0x44(%ebp)
081ad80d +0x05f:  je     081ad816 <+0x68>
081ad80f +0x061:  cmpw   $0x3e,-0x44(%ebp)
081ad814 +0x066:  jne    081ad82b <+0x7d>
081ad816 +0x068:  movswl -0x44(%ebp),%eax
081ad81a +0x06c:  mov    %eax,0x4(%esp)
081ad81e +0x070:  lea    -0x1c(%ebp),%eax
081ad821 +0x073:  mov    %eax,(%esp)
081ad824 +0x076:  call   081ae65e <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x14d>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x14d
081ad829 +0x07b:  jmp    081ad842 <+0x94>
081ad82b +0x07d:  mov    0x8(%ebp),%eax
081ad82e +0x080:  movzwl 0x4(%eax),%eax
081ad832 +0x084:  cwtl
081ad833 +0x085:  mov    %eax,0x4(%esp)
081ad837 +0x089:  lea    -0x1c(%ebp),%eax
081ad83a +0x08c:  mov    %eax,(%esp)
081ad83d +0x08f:  call   081ae65e <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x14d>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x14d
081ad842 +0x094:  mov    -0x40(%ebp),%eax
081ad845 +0x097:  mov    -0x3c(%ebp),%edx
081ad848 +0x09a:  mov    %eax,0x4(%esp)
081ad84c +0x09e:  mov    %edx,0x8(%esp)
081ad850 +0x0a2:  lea    -0x1c(%ebp),%eax
081ad853 +0x0a5:  mov    %eax,(%esp)
081ad856 +0x0a8:  call   081ae7d4 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x2c3>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x2c3
081ad85b +0x0ad:  mov    0x14(%ebp),%eax
081ad85e +0x0b0:  mov    %eax,0x4(%esp)
081ad862 +0x0b4:  lea    -0x1c(%ebp),%eax
081ad865 +0x0b7:  mov    %eax,(%esp)
081ad868 +0x0ba:  call   081ae6c4 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x1b3>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x1b3
081ad86d +0x0bf:  mov    0x18(%ebp),%eax
081ad870 +0x0c2:  mov    %eax,0x4(%esp)
081ad874 +0x0c6:  lea    -0x1c(%ebp),%eax
081ad877 +0x0c9:  mov    %eax,(%esp)
081ad87a +0x0cc:  call   081ae6c4 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x1b3>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x1b3
081ad87f +0x0d1:  mov    0x1c(%ebp),%eax
081ad882 +0x0d4:  mov    %eax,0x4(%esp)
081ad886 +0x0d8:  lea    -0x1c(%ebp),%eax
081ad889 +0x0db:  mov    %eax,(%esp)
081ad88c +0x0de:  call   081acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>  ; nexon::cash::ByteBuffer::operator<<(char const*)
081ad891 +0x0e3:  mov    0x20(%ebp),%eax
081ad894 +0x0e6:  mov    %eax,0x4(%esp)
081ad898 +0x0ea:  lea    -0x1c(%ebp),%eax
081ad89b +0x0ed:  mov    %eax,(%esp)
081ad89e +0x0f0:  call   081acba0 <_ZN5nexon4cash10ByteBufferlsEPKc>  ; nexon::cash::ByteBuffer::operator<<(char const*)
081ad8a3 +0x0f5:  mov    0x8(%ebp),%eax
081ad8a6 +0x0f8:  movzbl (%eax),%eax
081ad8a9 +0x0fb:  movzbl %al,%eax
081ad8ac +0x0fe:  mov    %eax,0x4(%esp)
081ad8b0 +0x102:  lea    -0x1c(%ebp),%eax
081ad8b3 +0x105:  mov    %eax,(%esp)
081ad8b6 +0x108:  call   081ae614 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x103>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x103
081ad8bb +0x10d:  mov    0x8(%ebp),%eax
081ad8be +0x110:  movzwl 0x2(%eax),%eax
081ad8c2 +0x114:  cwtl
081ad8c3 +0x115:  mov    %eax,0x4(%esp)
081ad8c7 +0x119:  lea    -0x1c(%ebp),%eax
081ad8ca +0x11c:  mov    %eax,(%esp)
081ad8cd +0x11f:  call   081ae65e <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x14d>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x14d
081ad8d2 +0x124:  movl   $0x0,-0xc(%ebp)
081ad8d9 +0x12b:  lea    -0x1c(%ebp),%eax
081ad8dc +0x12e:  mov    %eax,(%esp)
081ad8df +0x131:  call   081acf60 <_GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc+0x83>  ; global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)+0x83
081ad8e4 +0x136:  mov    %eax,0x4(%esp)
081ad8e8 +0x13a:  mov    0x8(%ebp),%eax
081ad8eb +0x13d:  mov    %eax,(%esp)
081ad8ee +0x140:  call   081aec2c <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x71b>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x71b
081ad8f3 +0x145:  mov    %eax,-0xc(%ebp)
081ad8f6 +0x148:  cmpl   $0x0,-0xc(%ebp)
081ad8fa +0x14c:  je     081ad904 <+0x156>
081ad8fc +0x14e:  mov    -0xc(%ebp),%eax
081ad8ff +0x151:  jmp    081ad9c1 <+0x213>
081ad904 +0x156:  mov    0x8(%ebp),%eax
081ad907 +0x159:  mov    %eax,(%esp)
081ad90a +0x15c:  call   081aea46 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x535>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x535
081ad90f +0x161:  mov    %eax,-0xc(%ebp)
081ad912 +0x164:  cmpl   $0x0,-0xc(%ebp)
081ad916 +0x168:  je     081ad920 <+0x172>
081ad918 +0x16a:  mov    -0xc(%ebp),%eax
081ad91b +0x16d:  jmp    081ad9c1 <+0x213>
081ad920 +0x172:  lea    -0x34(%ebp),%eax
081ad923 +0x175:  lea    -0x24(%ebp),%edx
081ad926 +0x178:  mov    %edx,0x10(%esp)
081ad92a +0x17c:  lea    -0x1e(%ebp),%edx
081ad92d +0x17f:  mov    %edx,0xc(%esp)
081ad931 +0x183:  lea    -0x1d(%ebp),%edx
081ad934 +0x186:  mov    %edx,0x8(%esp)
081ad938 +0x18a:  mov    0x8(%ebp),%edx
081ad93b +0x18d:  mov    %edx,0x4(%esp)
081ad93f +0x191:  mov    %eax,(%esp)
081ad942 +0x194:  call   081ad168 <_ZN5nexon4cash9NCashImpl15get_data_headerERhS2_Rj>  ; nexon::cash::NCashImpl::get_data_header(unsigned char&, unsigned char&, unsigned int&)
081ad947 +0x199:  sub    $0x4,%esp
081ad94a +0x19c:  movzbl -0x1e(%ebp),%eax
081ad94e +0x1a0:  cmp    $0x2,%al
081ad950 +0x1a2:  je     081ad96a <+0x1bc>
081ad952 +0x1a4:  movzbl -0x1e(%ebp),%eax
081ad956 +0x1a8:  movzbl %al,%eax
081ad959 +0x1ab:  mov    %eax,0x4(%esp)
081ad95d +0x1af:  mov    0x8(%ebp),%eax
081ad960 +0x1b2:  mov    %eax,(%esp)
081ad963 +0x1b5:  call   081ad1e0 <_ZN5nexon4cash9NCashImpl17handle_cash_errorEi>  ; nexon::cash::NCashImpl::handle_cash_error(int)
081ad968 +0x1ba:  jmp    081ad9c1 <+0x213>
081ad96a +0x1bc:  mov    0x24(%ebp),%eax
081ad96d +0x1bf:  mov    %eax,0x4(%esp)
081ad971 +0x1c3:  lea    -0x34(%ebp),%eax
081ad974 +0x1c6:  mov    %eax,(%esp)
081ad977 +0x1c9:  call   081ae8bc <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x3ab>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x3ab
081ad97c +0x1ce:  mov    0x24(%ebp),%eax
081ad97f +0x1d1:  add    $0x4,%eax
081ad982 +0x1d4:  mov    %eax,0x4(%esp)
081ad986 +0x1d8:  lea    -0x34(%ebp),%eax
081ad989 +0x1db:  mov    %eax,(%esp)
081ad98c +0x1de:  call   081ae94e <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x43d>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x43d
081ad991 +0x1e3:  mov    0x24(%ebp),%eax
081ad994 +0x1e6:  mov    0x4(%eax),%edx
081ad997 +0x1e9:  mov    0x24(%ebp),%eax
081ad99a +0x1ec:  movzbl (%eax),%eax
081ad99d +0x1ef:  movzbl %al,%eax
081ad9a0 +0x1f2:  mov    %edx,0xc(%esp)
081ad9a4 +0x1f6:  mov    %eax,0x8(%esp)
081ad9a8 +0x1fa:  movl   $&_ZZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionEsE12__FUNCTION__,0x4(%esp)
081ad9b0 +0x202:  movl   $"[%s] PURCHASE OK, db_id: %u, transaction_id: %u\n",(%esp)
081ad9b7 +0x209:  call   0807db60 <_init+0x458>
081ad9bc +0x20e:  mov    $0x0,%eax
081ad9c1 +0x213:  leave
081ad9c2 +0x214:  ret
081ad9c3 +0x215:  nop
```

## 反编译 C

```c
// nexon::cash::NCashImpl::purchase @ 0x81ad7ae

/* nexon::cash::NCashImpl::purchase(unsigned long long, int, int, char const*, char const*,
   nexon::cash::NXTransaction&, short) */

int nexon::cash::NCashImpl::purchase
              (ulonglong param_1,int param_2,int param_3,char *param_4,char *param_5,
              NXTransaction *param_6,short param_7)

{
  char cVar1;
  uint uVar2;
  undefined2 in_stack_00000022;
  short in_stack_00000024;
  undefined1 *puVar3;
  ByteBuffer local_38 [16];
  undefined1 local_28 [6];
  byte local_22;
  undefined4 local_21;
  int local_10;
  
  cVar1 = reconnect((NCashImpl *)param_1);
  if (cVar1 == '\x01') {
    set_data_header((char)&local_21 + '\x01',(uchar)param_1);
    if ((in_stack_00000024 == 0x3c) || (in_stack_00000024 == 0x3e)) {
      ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),in_stack_00000024);
    }
    else {
      ByteBuffer::operator<<
                ((ByteBuffer *)((int)&local_21 + 1),*(short *)((NCashImpl *)param_1 + 4));
    }
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
        ByteBuffer::operator>>(local_38,(uchar *)CONCAT22(in_stack_00000022,param_7));
        ByteBuffer::operator>>(local_38,(uint *)(_param_7 + 4));
        printf("[%s] PURCHASE OK, db_id: %u, transaction_id: %u\n",0x82,(uint)*_param_7,
               *(undefined4 *)(_param_7 + 4),puVar3);
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
