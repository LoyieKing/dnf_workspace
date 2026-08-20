# _updateFailCnt

`_ZN16DB_MouseRegister14_updateFailCntEjiPc`

`DB_MouseRegister::_updateFailCnt(unsigned int, int, char*)`

| 类 | 地址 |
|---|---|
| `DB_MouseRegister` | `0x084231b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084231b6  _ZN16DB_MouseRegister14_updateFailCntEjiPc
#           DB_MouseRegister::_updateFailCnt(unsigned int, int, char*)
# range [0x084231b6, 0x084232df]
084231b6 +0x000:  push   %ebp
084231b7 +0x001:  mov    %esp,%ebp
084231b9 +0x003:  sub    $0x28,%esp
084231bc +0x006:  call   08422938 <_ZN16DB_MouseRegister30_getDBHandleForDevideAccountDBEv>  ; DB_MouseRegister::_getDBHandleForDevideAccountDB()
084231c1 +0x00b:  mov    %eax,-0x10(%ebp)
084231c4 +0x00e:  movl   $0x0,0x4(%esp)
084231cc +0x016:  mov    0x8(%ebp),%eax
084231cf +0x019:  mov    %eax,(%esp)
084231d2 +0x01c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084231d7 +0x021:  mov    %eax,0xc(%esp)
084231db +0x025:  mov    0xc(%ebp),%eax
084231de +0x028:  mov    %eax,0x8(%esp)
084231e2 +0x02c:  movl   $"upDate member_mousepass set fail_cnt=%d where m_id=%s",0x4(%esp)
084231ea +0x034:  mov    -0x10(%ebp),%eax
084231ed +0x037:  mov    %eax,(%esp)
084231f0 +0x03a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084231f5 +0x03f:  movl   $0x1,0x4(%esp)
084231fd +0x047:  mov    -0x10(%ebp),%eax
08423200 +0x04a:  mov    %eax,(%esp)
08423203 +0x04d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08423208 +0x052:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842320d +0x057:  movl   $0x0,0x8(%esp)
08423215 +0x05f:  movl   $0x1,0x4(%esp)
0842321d +0x067:  mov    %eax,(%esp)
08423220 +0x06a:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08423225 +0x06f:  mov    %eax,-0xc(%ebp)
08423228 +0x072:  movl   $0x0,0x4(%esp)
08423230 +0x07a:  mov    0x8(%ebp),%eax
08423233 +0x07d:  mov    %eax,(%esp)
08423236 +0x080:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842323b +0x085:  mov    %eax,0xc(%esp)
0842323f +0x089:  mov    0xc(%ebp),%eax
08423242 +0x08c:  mov    %eax,0x8(%esp)
08423246 +0x090:  movl   $"upDate member_security_grade set goblin_fail_cnt=%d where m_id=%s",0x4(%esp)
0842324e +0x098:  mov    -0xc(%ebp),%eax
08423251 +0x09b:  mov    %eax,(%esp)
08423254 +0x09e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08423259 +0x0a3:  movl   $0x1,0x4(%esp)
08423261 +0x0ab:  mov    -0xc(%ebp),%eax
08423264 +0x0ae:  mov    %eax,(%esp)
08423267 +0x0b1:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842326c +0x0b6:  xor    $0x1,%eax
0842326f +0x0b9:  test   %al,%al
08423271 +0x0bb:  jne    08423284 <+0xce>
08423273 +0x0bd:  mov    -0xc(%ebp),%eax
08423276 +0x0c0:  mov    %eax,(%esp)
08423279 +0x0c3:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0842327e +0x0c8:  or     %edx,%eax
08423280 +0x0ca:  test   %eax,%eax
08423282 +0x0cc:  jne    0842328b <+0xd5>
08423284 +0x0ce:  mov    $0x1,%eax
08423289 +0x0d3:  jmp    08423290 <+0xda>
0842328b +0x0d5:  mov    $0x0,%eax
08423290 +0x0da:  test   %al,%al
08423292 +0x0dc:  je     084232dd <+0x127>
08423294 +0x0de:  movl   $0x0,0x4(%esp)
0842329c +0x0e6:  mov    0x8(%ebp),%eax
0842329f +0x0e9:  mov    %eax,(%esp)
084232a2 +0x0ec:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084232a7 +0x0f1:  mov    0xc(%ebp),%edx
084232aa +0x0f4:  mov    %edx,0xc(%esp)
084232ae +0x0f8:  mov    %eax,0x8(%esp)
084232b2 +0x0fc:  movl   $"inSert into member_security_grade(m_id, goblin_fail_cnt) values(%s, %d)",0x4(%esp)
084232ba +0x104:  mov    -0xc(%ebp),%eax
084232bd +0x107:  mov    %eax,(%esp)
084232c0 +0x10a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084232c5 +0x10f:  movl   $0x1,0x4(%esp)
084232cd +0x117:  mov    -0xc(%ebp),%eax
084232d0 +0x11a:  mov    %eax,(%esp)
084232d3 +0x11d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084232d8 +0x122:  xor    $0x1,%eax
084232db +0x125:  test   %al,%al
084232dd +0x127:  leave
084232de +0x128:  ret
084232df +0x129:  nop
```

## 反编译 C

```c
// DB_MouseRegister::_updateFailCnt @ 0x84231b6

/* DB_MouseRegister::_updateFailCnt(unsigned int, int, char*) */

uint DB_MouseRegister::_updateFailCnt(uint param_1,int param_2,char *param_3)

{
  char cVar1;
  MySQL *pMVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  
  pMVar2 = (MySQL *)_getDBHandleForDevideAccountDB();
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(pMVar2,"upDate member_mousepass set fail_cnt=%d where m_id=%s",param_2,uVar3);
  MySQL::exec(pMVar2,true);
  pMVar2 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(pMVar2,"upDate member_security_grade set goblin_fail_cnt=%d where m_id=%s",
                   param_2,uVar3);
  cVar1 = MySQL::exec(pMVar2,true);
  if (cVar1 == '\x01') {
    lVar5 = MySQL::getAffectedRowCount(pMVar2);
    if (lVar5 != 0) {
      uVar4 = 0;
      goto LAB_08423290;
    }
  }
  uVar4 = 1;
LAB_08423290:
  if ((char)uVar4 != '\0') {
    uVar3 = NumberToString(param_1,0);
    MySQL::set_query(pMVar2,
                     "inSert into member_security_grade(m_id, goblin_fail_cnt) values(%s, %d)",uVar3
                     ,param_2);
    uVar4 = MySQL::exec(pMVar2,true);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}
```
