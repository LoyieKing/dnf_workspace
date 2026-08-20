# dispatch

`_ZN19DB_SaveUserHandicap8dispatchEiiP6Stream`

`DB_SaveUserHandicap::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveUserHandicap` | `0x08427e54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08427e54  _ZN19DB_SaveUserHandicap8dispatchEiiP6Stream
#           DB_SaveUserHandicap::dispatch(int, int, Stream*)
# range [0x08427e54, 0x08428019]
08427e54 +0x000:  push   %ebp
08427e55 +0x001:  mov    %esp,%ebp
08427e57 +0x003:  push   %edi
08427e58 +0x004:  push   %esi
08427e59 +0x005:  push   %ebx
08427e5a +0x006:  sub    $0x3c,%esp
08427e5d +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08427e62 +0x00e:  movl   $0x0,0x8(%esp)
08427e6a +0x016:  movl   $0x1,0x4(%esp)
08427e72 +0x01e:  mov    %eax,(%esp)
08427e75 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08427e7a +0x026:  mov    %eax,-0x20(%ebp)
08427e7d +0x029:  mov    0x14(%ebp),%eax
08427e80 +0x02c:  mov    %eax,(%esp)
08427e83 +0x02f:  call   0845223a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4e50>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4e50
08427e88 +0x034:  mov    %eax,-0x1c(%ebp)
08427e8b +0x037:  mov    -0x1c(%ebp),%eax
08427e8e +0x03a:  mov    0x10(%eax),%eax
08427e91 +0x03d:  test   %eax,%eax
08427e93 +0x03f:  jne    08427ed8 <+0x84>
08427e95 +0x041:  mov    -0x1c(%ebp),%eax
08427e98 +0x044:  mov    0x8(%eax),%ebx
08427e9b +0x047:  mov    -0x1c(%ebp),%eax
08427e9e +0x04a:  mov    0x4(%eax),%eax
08427ea1 +0x04d:  movl   $0x0,0x4(%esp)
08427ea9 +0x055:  mov    %eax,(%esp)
08427eac +0x058:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08427eb1 +0x05d:  mov    -0x1c(%ebp),%edx
08427eb4 +0x060:  mov    0xc(%edx),%edx
08427eb7 +0x063:  mov    %ebx,0x10(%esp)
08427ebb +0x067:  mov    %eax,0xc(%esp)
08427ebf +0x06b:  mov    %edx,0x8(%esp)
08427ec3 +0x06f:  movl   $"upDate member_punish_info set occ_time=now(), start_time=now(), end_time='9999-12-31 23:59:59', punish_value=%d, apply_flag=2 where m_id=%s and punish_type=%d",0x4(%esp)
08427ecb +0x077:  mov    -0x20(%ebp),%eax
08427ece +0x07a:  mov    %eax,(%esp)
08427ed1 +0x07d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08427ed6 +0x082:  jmp    08427f23 <+0xcf>
08427ed8 +0x084:  mov    -0x1c(%ebp),%eax
08427edb +0x087:  mov    0x8(%eax),%ebx
08427ede +0x08a:  mov    -0x1c(%ebp),%eax
08427ee1 +0x08d:  mov    0x4(%eax),%eax
08427ee4 +0x090:  movl   $0x0,0x4(%esp)
08427eec +0x098:  mov    %eax,(%esp)
08427eef +0x09b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08427ef4 +0x0a0:  mov    -0x1c(%ebp),%edx
08427ef7 +0x0a3:  mov    0xc(%edx),%ecx
08427efa +0x0a6:  mov    -0x1c(%ebp),%edx
08427efd +0x0a9:  mov    0x10(%edx),%edx
08427f00 +0x0ac:  mov    %ebx,0x14(%esp)
08427f04 +0x0b0:  mov    %eax,0x10(%esp)
08427f08 +0x0b4:  mov    %ecx,0xc(%esp)
08427f0c +0x0b8:  mov    %edx,0x8(%esp)
08427f10 +0x0bc:  movl   $"upDate member_punish_info set occ_time=now(), start_time=now(), end_time=adddate(now(),interval %d day), punish_value=%d, apply_flag=2 where m_id=%s and punish_type=%d",0x4(%esp)
08427f18 +0x0c4:  mov    -0x20(%ebp),%eax
08427f1b +0x0c7:  mov    %eax,(%esp)
08427f1e +0x0ca:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08427f23 +0x0cf:  movl   $0x1,0x4(%esp)
08427f2b +0x0d7:  mov    -0x20(%ebp),%eax
08427f2e +0x0da:  mov    %eax,(%esp)
08427f31 +0x0dd:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08427f36 +0x0e2:  xor    $0x1,%eax
08427f39 +0x0e5:  test   %al,%al
08427f3b +0x0e7:  jne    08427f4e <+0xfa>
08427f3d +0x0e9:  mov    -0x20(%ebp),%eax
08427f40 +0x0ec:  mov    %eax,(%esp)
08427f43 +0x0ef:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08427f48 +0x0f4:  or     %edx,%eax
08427f4a +0x0f6:  test   %eax,%eax
08427f4c +0x0f8:  jne    08427f55 <+0x101>
08427f4e +0x0fa:  mov    $0x1,%eax
08427f53 +0x0ff:  jmp    08427f5a <+0x106>
08427f55 +0x101:  mov    $0x0,%eax
08427f5a +0x106:  test   %al,%al
08427f5c +0x108:  je     0842800d <+0x1b9>
08427f62 +0x10e:  mov    -0x1c(%ebp),%eax
08427f65 +0x111:  mov    0x10(%eax),%eax
08427f68 +0x114:  test   %eax,%eax
08427f6a +0x116:  jne    08427faf <+0x15b>
08427f6c +0x118:  mov    -0x1c(%ebp),%eax
08427f6f +0x11b:  mov    0xc(%eax),%esi
08427f72 +0x11e:  mov    -0x1c(%ebp),%eax
08427f75 +0x121:  mov    0x8(%eax),%ebx
08427f78 +0x124:  mov    -0x1c(%ebp),%eax
08427f7b +0x127:  mov    0x4(%eax),%eax
08427f7e +0x12a:  movl   $0x0,0x4(%esp)
08427f86 +0x132:  mov    %eax,(%esp)
08427f89 +0x135:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08427f8e +0x13a:  mov    %esi,0x10(%esp)
08427f92 +0x13e:  mov    %ebx,0xc(%esp)
08427f96 +0x142:  mov    %eax,0x8(%esp)
08427f9a +0x146:  movl   $"inSert into member_punish_info(m_id, occ_time, start_time, end_time, punish_type, punish_value, apply_flag) values(%s, now(), now(),'9999-12-31 23:59:59', %d, %d, 2)",0x4(%esp)
08427fa2 +0x14e:  mov    -0x20(%ebp),%eax
08427fa5 +0x151:  mov    %eax,(%esp)
08427fa8 +0x154:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08427fad +0x159:  jmp    08427ffa <+0x1a6>
08427faf +0x15b:  mov    -0x1c(%ebp),%eax
08427fb2 +0x15e:  mov    0xc(%eax),%edi
08427fb5 +0x161:  mov    -0x1c(%ebp),%eax
08427fb8 +0x164:  mov    0x8(%eax),%esi
08427fbb +0x167:  mov    -0x1c(%ebp),%eax
08427fbe +0x16a:  mov    0x10(%eax),%ebx
08427fc1 +0x16d:  mov    -0x1c(%ebp),%eax
08427fc4 +0x170:  mov    0x4(%eax),%eax
08427fc7 +0x173:  movl   $0x0,0x4(%esp)
08427fcf +0x17b:  mov    %eax,(%esp)
08427fd2 +0x17e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08427fd7 +0x183:  mov    %edi,0x14(%esp)
08427fdb +0x187:  mov    %esi,0x10(%esp)
08427fdf +0x18b:  mov    %ebx,0xc(%esp)
08427fe3 +0x18f:  mov    %eax,0x8(%esp)
08427fe7 +0x193:  movl   $"inSert into member_punish_info(m_id, occ_time, start_time, end_time, punish_type, punish_value, apply_flag) values(%s, now(), now(), adddate(now(),interval %d day), %d, %d, 2)",0x4(%esp)
08427fef +0x19b:  mov    -0x20(%ebp),%eax
08427ff2 +0x19e:  mov    %eax,(%esp)
08427ff5 +0x1a1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08427ffa +0x1a6:  movl   $0x1,0x4(%esp)
08428002 +0x1ae:  mov    -0x20(%ebp),%eax
08428005 +0x1b1:  mov    %eax,(%esp)
08428008 +0x1b4:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842800d +0x1b9:  mov    $0x1,%eax
08428012 +0x1be:  add    $0x3c,%esp
08428015 +0x1c1:  pop    %ebx
08428016 +0x1c2:  pop    %esi
08428017 +0x1c3:  pop    %edi
08428018 +0x1c4:  pop    %ebp
08428019 +0x1c5:  ret
```

## 反编译 C

```c
// DB_SaveUserHandicap::dispatch @ 0x8427e54

/* DB_SaveUserHandicap::dispatch(int, int, Stream*) */

undefined4 DB_SaveUserHandicap::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  MySQL *this;
  SIG_UPDATE_USER_HANDICAP *pSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  pSVar4 = Stream::GetOutBuffer<SIG_UPDATE_USER_HANDICAP>(in_stack_00000010);
  if (*(int *)(pSVar4 + 0x10) == 0) {
    uVar1 = *(undefined4 *)(pSVar4 + 8);
    uVar5 = NumberToString(*(uint *)(pSVar4 + 4),0);
    MySQL::set_query(this,
                     "upDate member_punish_info set occ_time=now(), start_time=now(), end_time=\'9999-12-31 23:59:59\', punish_value=%d, apply_flag=2 where m_id=%s and punish_type=%d"
                     ,*(undefined4 *)(pSVar4 + 0xc),uVar5,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(pSVar4 + 8);
    uVar5 = NumberToString(*(uint *)(pSVar4 + 4),0);
    MySQL::set_query(this,
                     "upDate member_punish_info set occ_time=now(), start_time=now(), end_time=adddate(now(),interval %d day), punish_value=%d, apply_flag=2 where m_id=%s and punish_type=%d"
                     ,*(undefined4 *)(pSVar4 + 0x10),*(undefined4 *)(pSVar4 + 0xc),uVar5,uVar1);
  }
  cVar3 = MySQL::exec(this,true);
  if (cVar3 == '\x01') {
    lVar8 = MySQL::getAffectedRowCount(this);
    if (lVar8 != 0) {
      bVar2 = false;
      goto LAB_08427f5a;
    }
  }
  bVar2 = true;
LAB_08427f5a:
  if (bVar2) {
    if (*(int *)(pSVar4 + 0x10) == 0) {
      uVar1 = *(undefined4 *)(pSVar4 + 0xc);
      uVar5 = *(undefined4 *)(pSVar4 + 8);
      uVar6 = NumberToString(*(uint *)(pSVar4 + 4),0);
      MySQL::set_query(this,
                       "inSert into member_punish_info(m_id, occ_time, start_time, end_time, punish_type, punish_value, apply_flag) values(%s, now(), now(),\'9999-12-31 23:59:59\', %d, %d, 2)"
                       ,uVar6,uVar5,uVar1);
    }
    else {
      uVar1 = *(undefined4 *)(pSVar4 + 0xc);
      uVar5 = *(undefined4 *)(pSVar4 + 8);
      uVar6 = *(undefined4 *)(pSVar4 + 0x10);
      uVar7 = NumberToString(*(uint *)(pSVar4 + 4),0);
      MySQL::set_query(this,
                       "inSert into member_punish_info(m_id, occ_time, start_time, end_time, punish_type, punish_value, apply_flag) values(%s, now(), now(), adddate(now(),interval %d day), %d, %d, 2)"
                       ,uVar7,uVar6,uVar5,uVar1);
    }
    MySQL::exec(this,true);
  }
  return 1;
}
```
