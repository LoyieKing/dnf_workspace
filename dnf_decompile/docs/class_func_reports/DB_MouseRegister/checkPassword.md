# checkPassword

`_ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_`

`DB_MouseRegister::checkPassword(unsigned int, char const*, bool, int&, int&, bool&, char*, char*)`

| 类 | 地址 |
|---|---|
| `DB_MouseRegister` | `0x08422c8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08422c8a  _ZN16DB_MouseRegister13checkPasswordEjPKcbRiS2_RbPcS4_
#           DB_MouseRegister::checkPassword(unsigned int, char const*, bool, int&, int&, bool&, char*, char*)
# range [0x08422c8a, 0x08422e69]
08422c8a +0x000:  push   %ebp
08422c8b +0x001:  mov    %esp,%ebp
08422c8d +0x003:  sub    $0x78,%esp
08422c90 +0x006:  mov    0x10(%ebp),%eax
08422c93 +0x009:  mov    %al,-0x5c(%ebp)
08422c96 +0x00c:  call   08422938 <_ZN16DB_MouseRegister30_getDBHandleForDevideAccountDBEv>  ; DB_MouseRegister::_getDBHandleForDevideAccountDB()
08422c9b +0x011:  mov    %eax,-0xc(%ebp)
08422c9e +0x014:  mov    0x1c(%ebp),%eax
08422ca1 +0x017:  movb   $0x0,(%eax)
08422ca4 +0x01a:  mov    0x18(%ebp),%eax
08422ca7 +0x01d:  movl   $0x0,(%eax)
08422cad +0x023:  movl   $0x24,0x8(%esp)
08422cb5 +0x02b:  movl   $0x0,0x4(%esp)
08422cbd +0x033:  mov    0x20(%ebp),%eax
08422cc0 +0x036:  mov    %eax,(%esp)
08422cc3 +0x039:  call   0807dcc0 <_init+0x5b8>
08422cc8 +0x03e:  movl   $0x0,0x4(%esp)
08422cd0 +0x046:  mov    0x8(%ebp),%eax
08422cd3 +0x049:  mov    %eax,(%esp)
08422cd6 +0x04c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08422cdb +0x051:  mov    %eax,0x8(%esp)
08422cdf +0x055:  movl   $"seLect mousepass,fail_cnt,cancel_cnt, version_info from member_mousepass where m_id=%s and enable_flag = '1'",0x4(%esp)
08422ce7 +0x05d:  mov    -0xc(%ebp),%eax
08422cea +0x060:  mov    %eax,(%esp)
08422ced +0x063:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08422cf2 +0x068:  movl   $0x1,0x4(%esp)
08422cfa +0x070:  mov    -0xc(%ebp),%eax
08422cfd +0x073:  mov    %eax,(%esp)
08422d00 +0x076:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08422d05 +0x07b:  xor    $0x1,%eax
08422d08 +0x07e:  test   %al,%al
08422d0a +0x080:  je     08422d16 <+0x8c>
08422d0c +0x082:  mov    $0x1,%eax
08422d11 +0x087:  jmp    08422e67 <+0x1dd>
08422d16 +0x08c:  mov    -0xc(%ebp),%eax
08422d19 +0x08f:  mov    %eax,(%esp)
08422d1c +0x092:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08422d21 +0x097:  test   %eax,%eax
08422d23 +0x099:  sete   %al
08422d26 +0x09c:  test   %al,%al
08422d28 +0x09e:  je     08422d34 <+0xaa>
08422d2a +0x0a0:  mov    $0x0,%eax
08422d2f +0x0a5:  jmp    08422e67 <+0x1dd>
08422d34 +0x0aa:  mov    -0xc(%ebp),%eax
08422d37 +0x0ad:  mov    %eax,(%esp)
08422d3a +0x0b0:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08422d3f +0x0b5:  xor    $0x1,%eax
08422d42 +0x0b8:  test   %al,%al
08422d44 +0x0ba:  je     08422d50 <+0xc6>
08422d46 +0x0bc:  mov    $0x1,%eax
08422d4b +0x0c1:  jmp    08422e67 <+0x1dd>
08422d50 +0x0c6:  movl   $0x24,0xc(%esp)
08422d58 +0x0ce:  mov    0x20(%ebp),%eax
08422d5b +0x0d1:  mov    %eax,0x8(%esp)
08422d5f +0x0d5:  movl   $0x0,0x4(%esp)
08422d67 +0x0dd:  mov    -0xc(%ebp),%eax
08422d6a +0x0e0:  mov    %eax,(%esp)
08422d6d +0x0e3:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08422d72 +0x0e8:  xor    $0x1,%eax
08422d75 +0x0eb:  test   %al,%al
08422d77 +0x0ed:  je     08422d83 <+0xf9>
08422d79 +0x0ef:  mov    $0x1,%eax
08422d7e +0x0f4:  jmp    08422e67 <+0x1dd>
08422d83 +0x0f9:  mov    0x14(%ebp),%eax
08422d86 +0x0fc:  mov    %eax,0x8(%esp)
08422d8a +0x100:  movl   $0x1,0x4(%esp)
08422d92 +0x108:  mov    -0xc(%ebp),%eax
08422d95 +0x10b:  mov    %eax,(%esp)
08422d98 +0x10e:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08422d9d +0x113:  xor    $0x1,%eax
08422da0 +0x116:  test   %al,%al
08422da2 +0x118:  je     08422dae <+0x124>
08422da4 +0x11a:  mov    $0x1,%eax
08422da9 +0x11f:  jmp    08422e67 <+0x1dd>
08422dae +0x124:  mov    0x18(%ebp),%eax
08422db1 +0x127:  mov    %eax,0x8(%esp)
08422db5 +0x12b:  movl   $0x2,0x4(%esp)
08422dbd +0x133:  mov    -0xc(%ebp),%eax
08422dc0 +0x136:  mov    %eax,(%esp)
08422dc3 +0x139:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08422dc8 +0x13e:  xor    $0x1,%eax
08422dcb +0x141:  test   %al,%al
08422dcd +0x143:  je     08422dd9 <+0x14f>
08422dcf +0x145:  mov    $0x1,%eax
08422dd4 +0x14a:  jmp    08422e67 <+0x1dd>
08422dd9 +0x14f:  cmpb   $0x0,-0x5c(%ebp)
08422ddd +0x153:  je     08422df0 <+0x166>
08422ddf +0x155:  mov    0x14(%ebp),%eax
08422de2 +0x158:  mov    (%eax),%eax
08422de4 +0x15a:  cmp    $0x2,%eax
08422de7 +0x15d:  jle    08422df0 <+0x166>
08422de9 +0x15f:  mov    $0x49,%eax
08422dee +0x164:  jmp    08422e67 <+0x1dd>
08422df0 +0x166:  lea    -0xd(%ebp),%eax
08422df3 +0x169:  mov    %eax,0x8(%esp)
08422df7 +0x16d:  movl   $0x3,0x4(%esp)
08422dff +0x175:  mov    -0xc(%ebp),%eax
08422e02 +0x178:  mov    %eax,(%esp)
08422e05 +0x17b:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08422e0a +0x180:  xor    $0x1,%eax
08422e0d +0x183:  test   %al,%al
08422e0f +0x185:  je     08422e18 <+0x18e>
08422e11 +0x187:  mov    $0x1,%eax
08422e16 +0x18c:  jmp    08422e67 <+0x1dd>
08422e18 +0x18e:  movzbl -0xd(%ebp),%eax
08422e1c +0x192:  cmp    $0x1,%al
08422e1e +0x194:  jne    08422e27 <+0x19d>
08422e20 +0x196:  mov    $0xa6,%eax
08422e25 +0x19b:  jmp    08422e67 <+0x1dd>
08422e27 +0x19d:  movl   $0x24,0x8(%esp)
08422e2f +0x1a5:  mov    0xc(%ebp),%eax
08422e32 +0x1a8:  mov    %eax,0x4(%esp)
08422e36 +0x1ac:  lea    -0x31(%ebp),%eax
08422e39 +0x1af:  mov    %eax,(%esp)
08422e3c +0x1b2:  call   0807d8d0 <_init+0x1c8>
08422e41 +0x1b7:  mov    &_ZN10GlobalData31s_pcryptRijndael_MousePassword_E,%eax
08422e46 +0x1bc:  lea    -0x55(%ebp),%edx
08422e49 +0x1bf:  mov    %edx,0x8(%esp)
08422e4d +0x1c3:  lea    -0x31(%ebp),%edx
08422e50 +0x1c6:  mov    %edx,0x4(%esp)
08422e54 +0x1ca:  mov    %eax,(%esp)
08422e57 +0x1cd:  call   0846c398 <_Z11encryptAES_P9CRijndaelPcS1_>  ; encryptAES_(CRijndael*, char*, char*)
08422e5c +0x1d2:  mov    0x1c(%ebp),%eax
08422e5f +0x1d5:  movb   $0x1,(%eax)
08422e62 +0x1d8:  mov    $0x0,%eax
08422e67 +0x1dd:  leave
08422e68 +0x1de:  ret
08422e69 +0x1df:  nop
```

## 反编译 C

```c
// DB_MouseRegister::checkPassword @ 0x8422c8a

/* DB_MouseRegister::checkPassword(unsigned int, char const*, bool, int&, int&, bool&, char*, char*)
    */

undefined4
DB_MouseRegister::checkPassword
          (uint param_1,char *param_2,bool param_3,int *param_4,int *param_5,bool *param_6,
          char *param_7,char *param_8)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char local_59 [36];
  char local_35 [36];
  char local_11;
  MySQL *local_10;
  
  local_10 = (MySQL *)_getDBHandleForDevideAccountDB();
  *param_6 = false;
  *param_5 = 0;
  memset(param_7,0,0x24);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_10,
                   "seLect mousepass,fail_cnt,cancel_cnt, version_info from member_mousepass where m_id=%s and enable_flag = \'1\'"
                   ,uVar2);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_10);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = MySQL::fetch(local_10);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_str(local_10,0,param_7,0x24);
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_int(local_10,1,param_4);
          if (cVar1 == '\x01') {
            cVar1 = MySQL::get_int(local_10,2,param_5);
            if (cVar1 == '\x01') {
              if ((param_3) && (2 < *param_4)) {
                uVar2 = 0x49;
              }
              else {
                cVar1 = MySQL::get_byte(local_10,3,&local_11);
                if (cVar1 == '\x01') {
                  if (local_11 == '\x01') {
                    uVar2 = 0xa6;
                  }
                  else {
                    strncpy(local_35,param_2,0x24);
                    encryptAES_(GlobalData::s_pcryptRijndael_MousePassword_,local_35,local_59);
                    *param_6 = true;
                    uVar2 = 0;
                  }
                }
                else {
                  uVar2 = 1;
                }
              }
            }
            else {
              uVar2 = 1;
            }
          }
          else {
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
