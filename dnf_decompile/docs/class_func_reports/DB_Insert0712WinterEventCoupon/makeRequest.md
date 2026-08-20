# makeRequest

`_ZN30DB_Insert0712WinterEventCoupon11makeRequestEjjj`

`DB_Insert0712WinterEventCoupon::makeRequest(unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_Insert0712WinterEventCoupon` | `0x0842e648` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842e648  _ZN30DB_Insert0712WinterEventCoupon11makeRequestEjjj
#           DB_Insert0712WinterEventCoupon::makeRequest(unsigned int, unsigned int, unsigned int)
# range [0x0842e648, 0x0842e6df]
0842e648 +0x00:  push   %ebp
0842e649 +0x01:  mov    %esp,%ebp
0842e64b +0x03:  sub    $0x28,%esp
0842e64e +0x06:  mov    0x10(%ebp),%eax
0842e651 +0x09:  mov    %eax,0xc(%esp)
0842e655 +0x0d:  mov    0xc(%ebp),%eax
0842e658 +0x10:  mov    %eax,0x8(%esp)
0842e65c +0x14:  mov    0x8(%ebp),%eax
0842e65f +0x17:  mov    %eax,0x4(%esp)
0842e663 +0x1b:  movl   $0x112,(%esp)
0842e66a +0x22:  call   0842e6e0 <_ZN30DB_Insert0712WinterEventCoupon12_makeRequestE19ENUM_INTERNALPACKETjjj>  ; DB_Insert0712WinterEventCoupon::_makeRequest(ENUM_INTERNALPACKET, unsigned int, unsigned int, unsigned int)
0842e66f +0x27:  mov    %eax,-0xc(%ebp)
0842e672 +0x2a:  cmpl   $0x0,-0xc(%ebp)
0842e676 +0x2e:  je     0842e6dc <+0x94>
0842e678 +0x30:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842e67d +0x35:  mov    -0xc(%ebp),%edx
0842e680 +0x38:  mov    %edx,0x8(%esp)
0842e684 +0x3c:  movl   $0x2,0x4(%esp)
0842e68c +0x44:  mov    %eax,(%esp)
0842e68f +0x47:  call   08571008 <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXEP6Stream>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, Stream*)
0842e694 +0x4c:  mov    0x10(%ebp),%eax
0842e697 +0x4f:  mov    %eax,0xc(%esp)
0842e69b +0x53:  mov    0xc(%ebp),%eax
0842e69e +0x56:  mov    %eax,0x8(%esp)
0842e6a2 +0x5a:  mov    0x8(%ebp),%eax
0842e6a5 +0x5d:  mov    %eax,0x4(%esp)
0842e6a9 +0x61:  movl   $0x113,(%esp)
0842e6b0 +0x68:  call   0842e6e0 <_ZN30DB_Insert0712WinterEventCoupon12_makeRequestE19ENUM_INTERNALPACKETjjj>  ; DB_Insert0712WinterEventCoupon::_makeRequest(ENUM_INTERNALPACKET, unsigned int, unsigned int, unsigned int)
0842e6b5 +0x6d:  mov    %eax,-0xc(%ebp)
0842e6b8 +0x70:  cmpl   $0x0,-0xc(%ebp)
0842e6bc +0x74:  je     0842e6dd <+0x95>
0842e6be +0x76:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842e6c3 +0x7b:  mov    -0xc(%ebp),%edx
0842e6c6 +0x7e:  mov    %edx,0x8(%esp)
0842e6ca +0x82:  movl   $0x4,0x4(%esp)
0842e6d2 +0x8a:  mov    %eax,(%esp)
0842e6d5 +0x8d:  call   08571008 <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXEP6Stream>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, Stream*)
0842e6da +0x92:  jmp    0842e6dd <+0x95>
0842e6dc +0x94:  nop
0842e6dd +0x95:  leave
0842e6de +0x96:  ret
0842e6df +0x97:  nop
```

## 反编译 C

```c
// DB_Insert0712WinterEventCoupon::makeRequest @ 0x842e648

/* DB_Insert0712WinterEventCoupon::makeRequest(unsigned int, unsigned int, unsigned int) */

void DB_Insert0712WinterEventCoupon::makeRequest(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _makeRequest(0x112,param_1,param_2,param_3);
  if (iVar1 != 0) {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,iVar1);
    iVar1 = _makeRequest(0x113,param_1,param_2,param_3);
    if (iVar1 != 0) {
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,iVar1);
    }
  }
  return;
}
```
