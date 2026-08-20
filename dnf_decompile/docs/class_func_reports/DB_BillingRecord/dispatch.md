# dispatch

`_ZN16DB_BillingRecord8dispatchEiiP6Stream`

`DB_BillingRecord::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_BillingRecord` | `0x08424574` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08424574  _ZN16DB_BillingRecord8dispatchEiiP6Stream
#           DB_BillingRecord::dispatch(int, int, Stream*)
# range [0x08424574, 0x08424601]
08424574 +0x00:  push   %ebp
08424575 +0x01:  mov    %esp,%ebp
08424577 +0x03:  sub    $0x38,%esp
0842457a +0x06:  mov    0x14(%ebp),%eax
0842457d +0x09:  mov    %eax,(%esp)
08424580 +0x0c:  call   08451e9a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4ab0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4ab0
08424585 +0x11:  mov    %eax,-0xc(%ebp)
08424588 +0x14:  cmpl   $0x0,-0xc(%ebp)
0842458c +0x18:  je     084245cf <+0x5b>
0842458e +0x1a:  movb   $0x0,-0xd(%ebp)
08424592 +0x1e:  lea    -0xd(%ebp),%eax
08424595 +0x21:  mov    %eax,0x8(%esp)
08424599 +0x25:  mov    -0xc(%ebp),%eax
0842459c +0x28:  mov    %eax,0x4(%esp)
084245a0 +0x2c:  mov    0x8(%ebp),%eax
084245a3 +0x2f:  mov    %eax,(%esp)
084245a6 +0x32:  call   08424602 <_ZN16DB_BillingRecord13InsertBuyUserEP18SIG_BILLING_RECORDRb>  ; DB_BillingRecord::InsertBuyUser(SIG_BILLING_RECORD*, bool&)
084245ab +0x37:  movzbl -0xd(%ebp),%eax
084245af +0x3b:  movzbl %al,%eax
084245b2 +0x3e:  mov    %eax,0x8(%esp)
084245b6 +0x42:  mov    -0xc(%ebp),%eax
084245b9 +0x45:  mov    %eax,0x4(%esp)
084245bd +0x49:  mov    0x8(%ebp),%eax
084245c0 +0x4c:  mov    %eax,(%esp)
084245c3 +0x4f:  call   084247e0 <_ZN16DB_BillingRecord15InsertSaleEntryEP18SIG_BILLING_RECORDb>  ; DB_BillingRecord::InsertSaleEntry(SIG_BILLING_RECORD*, bool)
084245c8 +0x54:  mov    $0x1,%eax
084245cd +0x59:  jmp    08424600 <+0x8c>
084245cf +0x5b:  movl   $"SIG_BILLING_RECORD is NULL",0x10(%esp)
084245d7 +0x63:  movl   $0x606e,0xc(%esp)
084245df +0x6b:  movl   $&_ZZN16DB_BillingRecord8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
084245e7 +0x73:  movl   $"DBThread.cpp",0x4(%esp)
084245ef +0x7b:  movl   $0x1,(%esp)
084245f6 +0x82:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084245fb +0x87:  mov    $0x0,%eax
08424600 +0x8c:  leave
08424601 +0x8d:  ret
```

## 反编译 C

```c
// DB_BillingRecord::dispatch @ 0x8424574

/* DB_BillingRecord::dispatch(int, int, Stream*) */

bool __thiscall
DB_BillingRecord::dispatch(DB_BillingRecord *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  bool local_11;
  SIG_BILLING_RECORD *local_10;
  
  local_10 = Stream::GetOutBuffer<SIG_BILLING_RECORD>(param_3);
  bVar1 = local_10 == (SIG_BILLING_RECORD *)0x0;
  if (bVar1) {
    LogManager::logFormat
              (1,"DBThread.cpp","virtual bool DB_BillingRecord::dispatch(int, int, Stream*)",0x606e,
               "SIG_BILLING_RECORD is NULL");
  }
  else {
    local_11 = false;
    InsertBuyUser(this,local_10,&local_11);
    InsertSaleEntry(this,local_10,local_11);
  }
  return !bVar1;
}
```
