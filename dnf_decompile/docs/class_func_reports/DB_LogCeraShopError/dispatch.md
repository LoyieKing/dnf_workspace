# dispatch

`_ZN19DB_LogCeraShopError8dispatchEiiP6Stream`

`DB_LogCeraShopError::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LogCeraShopError` | `0x0844c40a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844c40a  _ZN19DB_LogCeraShopError8dispatchEiiP6Stream
#           DB_LogCeraShopError::dispatch(int, int, Stream*)
# range [0x0844c40a, 0x0844c4e1]
0844c40a +0x00:  push   %ebp
0844c40b +0x01:  mov    %esp,%ebp
0844c40d +0x03:  push   %edi
0844c40e +0x04:  push   %esi
0844c40f +0x05:  push   %ebx
0844c410 +0x06:  sub    $0x6c,%esp
0844c413 +0x09:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844c418 +0x0e:  movl   $0x0,0x8(%esp)
0844c420 +0x16:  movl   $0xd,0x4(%esp)
0844c428 +0x1e:  mov    %eax,(%esp)
0844c42b +0x21:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844c430 +0x26:  mov    %eax,-0x20(%ebp)
0844c433 +0x29:  cmpl   $0x0,-0x20(%ebp)
0844c437 +0x2d:  jne    0844c443 <+0x39>
0844c439 +0x2f:  mov    $0x0,%eax
0844c43e +0x34:  jmp    0844c4d9 <+0xcf>
0844c443 +0x39:  mov    0x14(%ebp),%eax
0844c446 +0x3c:  mov    %eax,(%esp)
0844c449 +0x3f:  call   0845491e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x7534>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x7534
0844c44e +0x44:  mov    %eax,-0x1c(%ebp)
0844c451 +0x47:  cmpl   $0x0,-0x1c(%ebp)
0844c455 +0x4b:  jne    0844c45e <+0x54>
0844c457 +0x4d:  mov    $0x0,%eax
0844c45c +0x52:  jmp    0844c4d9 <+0xcf>
0844c45e +0x54:  mov    -0x1c(%ebp),%eax
0844c461 +0x57:  mov    0x18(%eax),%eax
0844c464 +0x5a:  mov    %eax,-0x2c(%ebp)
0844c467 +0x5d:  mov    -0x1c(%ebp),%eax
0844c46a +0x60:  mov    0x14(%eax),%edi
0844c46d +0x63:  mov    -0x1c(%ebp),%eax
0844c470 +0x66:  movzwl 0x10(%eax),%eax
0844c474 +0x6a:  movswl %ax,%esi
0844c477 +0x6d:  mov    -0x1c(%ebp),%eax
0844c47a +0x70:  mov    0xc(%eax),%ebx
0844c47d +0x73:  mov    -0x1c(%ebp),%eax
0844c480 +0x76:  mov    0x8(%eax),%ecx
0844c483 +0x79:  mov    -0x1c(%ebp),%eax
0844c486 +0x7c:  mov    0x4(%eax),%edx
0844c489 +0x7f:  mov    -0x1c(%ebp),%eax
0844c48c +0x82:  mov    (%eax),%eax
0844c48e +0x84:  mov    %eax,-0x3c(%ebp)
0844c491 +0x87:  mov    -0x2c(%ebp),%eax
0844c494 +0x8a:  mov    %eax,0x20(%esp)
0844c498 +0x8e:  mov    %edi,0x1c(%esp)
0844c49c +0x92:  mov    %esi,0x18(%esp)
0844c4a0 +0x96:  mov    %ebx,0x14(%esp)
0844c4a4 +0x9a:  mov    %ecx,0x10(%esp)
0844c4a8 +0x9e:  mov    %edx,0xc(%esp)
0844c4ac +0xa2:  mov    -0x3c(%ebp),%eax
0844c4af +0xa5:  mov    %eax,0x8(%esp)
0844c4b3 +0xa9:  movl   $"inSert into cerashop_err_log(m_id, charac_no, server_id, channel_no, type, err_code, goods_id, time) values (%u, %u, %u, %u, %d, %u, %d, now())",0x4(%esp)
0844c4bb +0xb1:  mov    -0x20(%ebp),%eax
0844c4be +0xb4:  mov    %eax,(%esp)
0844c4c1 +0xb7:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844c4c6 +0xbc:  movl   $0x1,0x4(%esp)
0844c4ce +0xc4:  mov    -0x20(%ebp),%eax
0844c4d1 +0xc7:  mov    %eax,(%esp)
0844c4d4 +0xca:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844c4d9 +0xcf:  add    $0x6c,%esp
0844c4dc +0xd2:  pop    %ebx
0844c4dd +0xd3:  pop    %esi
0844c4de +0xd4:  pop    %edi
0844c4df +0xd5:  pop    %ebp
0844c4e0 +0xd6:  ret
0844c4e1 +0xd7:  nop
```

## 反编译 C

```c
// DB_LogCeraShopError::dispatch @ 0x844c40a

/* DB_LogCeraShopError::dispatch(int, int, Stream*) */

undefined4 DB_LogCeraShopError::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  undefined4 uVar1;
  SIG_CERASHOP_ERROR_LOG *pSVar2;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0xd,0);
  if (this == (MySQL *)0x0) {
    uVar1 = 0;
  }
  else {
    pSVar2 = Stream::GetOutBuffer<SIG_CERASHOP_ERROR_LOG>(in_stack_00000010);
    if (pSVar2 == (SIG_CERASHOP_ERROR_LOG *)0x0) {
      uVar1 = 0;
    }
    else {
      MySQL::set_query(this,
                       "inSert into cerashop_err_log(m_id, charac_no, server_id, channel_no, type, err_code, goods_id, time) values (%u, %u, %u, %u, %d, %u, %d, now())"
                       ,*(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4),
                       *(undefined4 *)(pSVar2 + 8),*(undefined4 *)(pSVar2 + 0xc),
                       (int)*(short *)(pSVar2 + 0x10),*(undefined4 *)(pSVar2 + 0x14),
                       *(undefined4 *)(pSVar2 + 0x18));
      uVar1 = MySQL::exec(this,true);
    }
  }
  return uVar1;
}
```
