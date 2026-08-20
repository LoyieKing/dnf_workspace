# UpdateChannel

`_ZN16DB_UpdateChannel13UpdateChannelEP18SIG_UPDATE_CHANNEL`

`DB_UpdateChannel::UpdateChannel(SIG_UPDATE_CHANNEL*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateChannel` | `0x08418032` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08418032  _ZN16DB_UpdateChannel13UpdateChannelEP18SIG_UPDATE_CHANNEL
#           DB_UpdateChannel::UpdateChannel(SIG_UPDATE_CHANNEL*)
# range [0x08418032, 0x0841812f]
08418032 +0x00:  push   %ebp
08418033 +0x01:  mov    %esp,%ebp
08418035 +0x03:  push   %edi
08418036 +0x04:  push   %esi
08418037 +0x05:  push   %ebx
08418038 +0x06:  sub    $0x7c,%esp
0841803b +0x09:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08418040 +0x0e:  movl   $0x0,0x8(%esp)
08418048 +0x16:  movl   $0x2,0x4(%esp)
08418050 +0x1e:  mov    %eax,(%esp)
08418053 +0x21:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08418058 +0x26:  mov    %eax,-0x1c(%ebp)
0841805b +0x29:  mov    0xc(%ebp),%eax
0841805e +0x2c:  mov    (%eax),%ebx
08418060 +0x2e:  mov    0xc(%ebp),%eax
08418063 +0x31:  mov    0x36(%eax),%edi
08418066 +0x34:  mov    0xc(%ebp),%eax
08418069 +0x37:  mov    0x32(%eax),%eax
0841806c +0x3a:  mov    %eax,-0x3c(%ebp)
0841806f +0x3d:  mov    0xc(%ebp),%eax
08418072 +0x40:  mov    0x1e(%eax),%eax
08418075 +0x43:  mov    %eax,-0x38(%ebp)
08418078 +0x46:  mov    0xc(%ebp),%eax
0841807b +0x49:  mov    0x1a(%eax),%eax
0841807e +0x4c:  mov    %eax,-0x34(%ebp)
08418081 +0x4f:  mov    0xc(%ebp),%eax
08418084 +0x52:  mov    0x16(%eax),%eax
08418087 +0x55:  mov    %eax,-0x30(%ebp)
0841808a +0x58:  mov    0xc(%ebp),%eax
0841808d +0x5b:  mov    0x12(%eax),%eax
08418090 +0x5e:  mov    %eax,-0x2c(%ebp)
08418093 +0x61:  mov    0xc(%ebp),%eax
08418096 +0x64:  mov    0xe(%eax),%esi
08418099 +0x67:  mov    0xc(%ebp),%eax
0841809c +0x6a:  mov    0xa(%eax),%ecx
0841809f +0x6d:  mov    0xc(%ebp),%eax
084180a2 +0x70:  mov    0x6(%eax),%edx
084180a5 +0x73:  mov    0xc(%ebp),%eax
084180a8 +0x76:  movzwl 0x4(%eax),%eax
084180ac +0x7a:  cwtl
084180ad +0x7b:  mov    %ebx,0x30(%esp)
084180b1 +0x7f:  mov    %edi,0x2c(%esp)
084180b5 +0x83:  mov    -0x3c(%ebp),%ebx
084180b8 +0x86:  mov    %ebx,0x28(%esp)
084180bc +0x8a:  mov    -0x38(%ebp),%ebx
084180bf +0x8d:  mov    %ebx,0x24(%esp)
084180c3 +0x91:  mov    -0x34(%ebp),%ebx
084180c6 +0x94:  mov    %ebx,0x20(%esp)
084180ca +0x98:  mov    -0x30(%ebp),%ebx
084180cd +0x9b:  mov    %ebx,0x1c(%esp)
084180d1 +0x9f:  mov    -0x2c(%ebp),%ebx
084180d4 +0xa2:  mov    %ebx,0x18(%esp)
084180d8 +0xa6:  mov    %esi,0x14(%esp)
084180dc +0xaa:  mov    %ecx,0x10(%esp)
084180e0 +0xae:  mov    %edx,0xc(%esp)
084180e4 +0xb2:  mov    %eax,0x8(%esp)
084180e8 +0xb6:  movl   $"upDate game_channel set gc_now=%d,gc_up_time=now(),gc_swordman_cnt=%d,gc_fighter_cnt=%d,gc_gunner_cnt=%d,gc_mage_cnt=%d,gc_priest_cnt=%d,gc_at_gunner_cnt=%d,gc_thief_cnt=%d,gc_hangame=%d,gc_nexon=%d where gc_no=%d",0x4(%esp)
084180f0 +0xbe:  mov    -0x1c(%ebp),%eax
084180f3 +0xc1:  mov    %eax,(%esp)
084180f6 +0xc4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084180fb +0xc9:  movl   $0x1,0x4(%esp)
08418103 +0xd1:  mov    -0x1c(%ebp),%eax
08418106 +0xd4:  mov    %eax,(%esp)
08418109 +0xd7:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841810e +0xdc:  mov    %al,-0x1d(%ebp)
08418111 +0xdf:  movzbl -0x1d(%ebp),%eax
08418115 +0xe3:  xor    $0x1,%eax
08418118 +0xe6:  test   %al,%al
0841811a +0xe8:  je     08418123 <+0xf1>
0841811c +0xea:  mov    $0x0,%eax
08418121 +0xef:  jmp    08418128 <+0xf6>
08418123 +0xf1:  mov    $0x1,%eax
08418128 +0xf6:  add    $0x7c,%esp
0841812b +0xf9:  pop    %ebx
0841812c +0xfa:  pop    %esi
0841812d +0xfb:  pop    %edi
0841812e +0xfc:  pop    %ebp
0841812f +0xfd:  ret
```

## 反编译 C

```c
// DB_UpdateChannel::UpdateChannel @ 0x8418032

/* DB_UpdateChannel::UpdateChannel(SIG_UPDATE_CHANNEL*) */

bool __thiscall DB_UpdateChannel::UpdateChannel(DB_UpdateChannel *this,SIG_UPDATE_CHANNEL *param_1)

{
  char cVar1;
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,
                   "upDate game_channel set gc_now=%d,gc_up_time=now(),gc_swordman_cnt=%d,gc_fighter_cnt=%d,gc_gunner_cnt=%d,gc_mage_cnt=%d,gc_priest_cnt=%d,gc_at_gunner_cnt=%d,gc_thief_cnt=%d,gc_hangame=%d,gc_nexon=%d where gc_no=%d"
                   ,(int)*(short *)(param_1 + 4),*(undefined4 *)(param_1 + 6),
                   *(undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0xe),
                   *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x16),
                   *(undefined4 *)(param_1 + 0x1a),*(undefined4 *)(param_1 + 0x1e),
                   *(undefined4 *)(param_1 + 0x32),*(undefined4 *)(param_1 + 0x36),
                   *(undefined4 *)param_1);
  cVar1 = MySQL::exec(this_00,true);
  return cVar1 == '\x01';
}
```
