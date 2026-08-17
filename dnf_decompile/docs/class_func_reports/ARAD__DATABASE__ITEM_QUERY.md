# ARAD__DATABASE__ITEM_QUERY

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## arad_sp_buy_item_check

```asm
// === 0818cfab ARAD::DATABASE::ITEM_QUERY::arad_sp_buy_item_check  [0x0818cfab-0x818d23f] ===
 818cfab:	55                   	push   %ebp
 818cfac:	89 e5                	mov    %esp,%ebp
 818cfae:	53                   	push   %ebx
 818cfaf:	83 ec 44             	sub    $0x44,%esp
 818cfb2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818cfb7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818cfbe:	00 
 818cfbf:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 818cfc6:	00 
 818cfc7:	89 04 24             	mov    %eax,(%esp)
 818cfca:	e8 6f 82 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818cfcf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818cfd2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 818cfd6:	75 3e                	jne    818d016 <_ZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoE+0x6b>
 818cfd8:	c7 44 24 14 3f 25 b9 	movl   $0x8b9253f,0x14(%esp)
 818cfdf:	08 
 818cfe0:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818cfe7:	08 
 818cfe8:	c7 44 24 0c 54 04 00 	movl   $0x454,0xc(%esp)
 818cfef:	00 
 818cff0:	c7 44 24 08 a0 3b b9 	movl   $0x8b93ba0,0x8(%esp)
 818cff7:	08 
 818cff8:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818cfff:	08 
 818d000:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818d007:	e8 fe 6b 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818d00c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818d011:	e9 24 02 00 00       	jmp    818d23a <_ZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoE+0x28f>
 818d016:	c7 45 ef 00 00 00 00 	movl   $0x0,-0x11(%ebp)
 818d01d:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 818d021:	8d 45 ef             	lea    -0x11(%ebp),%eax
 818d024:	89 04 24             	mov    %eax,(%esp)
 818d027:	e8 a4 18 01 00       	call   819e8d0 <_ZN4ARAD16GetQuarterOfYearEPc>
 818d02c:	8b 45 08             	mov    0x8(%ebp),%eax
 818d02f:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 818d033:	66 83 f8 01          	cmp    $0x1,%ax
 818d037:	75 3a                	jne    818d073 <_ZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoE+0xc8>
 818d039:	8b 45 08             	mov    0x8(%ebp),%eax
 818d03c:	8b 48 08             	mov    0x8(%eax),%ecx
 818d03f:	8b 45 08             	mov    0x8(%ebp),%eax
 818d042:	8b 50 0c             	mov    0xc(%eax),%edx
 818d045:	8b 45 08             	mov    0x8(%ebp),%eax
 818d048:	8b 40 10             	mov    0x10(%eax),%eax
 818d04b:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 818d04f:	89 54 24 10          	mov    %edx,0x10(%esp)
 818d053:	89 44 24 0c          	mov    %eax,0xc(%esp)
 818d057:	8d 45 ef             	lea    -0x11(%ebp),%eax
 818d05a:	89 44 24 08          	mov    %eax,0x8(%esp)
 818d05e:	c7 44 24 04 e8 2d b9 	movl   $0x8b92de8,0x4(%esp)
 818d065:	08 
 818d066:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818d069:	89 04 24             	mov    %eax,(%esp)
 818d06c:	e8 4f 71 26 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 818d071:	eb 2e                	jmp    818d0a1 <_ZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoE+0xf6>
 818d073:	8b 45 08             	mov    0x8(%ebp),%eax
 818d076:	8b 50 0c             	mov    0xc(%eax),%edx
 818d079:	8b 45 08             	mov    0x8(%ebp),%eax
 818d07c:	8b 40 10             	mov    0x10(%eax),%eax
 818d07f:	89 54 24 10          	mov    %edx,0x10(%esp)
 818d083:	89 44 24 0c          	mov    %eax,0xc(%esp)
 818d087:	8d 45 ef             	lea    -0x11(%ebp),%eax
 818d08a:	89 44 24 08          	mov    %eax,0x8(%esp)
 818d08e:	c7 44 24 04 48 2e b9 	movl   $0x8b92e48,0x4(%esp)
 818d095:	08 
 818d096:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818d099:	89 04 24             	mov    %eax,(%esp)
 818d09c:	e8 1f 71 26 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 818d0a1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 818d0a8:	00 
 818d0a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818d0ac:	89 04 24             	mov    %eax,(%esp)
 818d0af:	e8 72 72 26 00       	call   83f4326 <_ZN5MySQL4execEb>
 818d0b4:	83 f0 01             	xor    $0x1,%eax
 818d0b7:	84 c0                	test   %al,%al
 818d0b9:	74 62                	je     818d11d <_ZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoE+0x172>
 818d0bb:	8b 45 08             	mov    0x8(%ebp),%eax
 818d0be:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 818d0c2:	0f bf d8             	movswl %ax,%ebx
 818d0c5:	8b 45 08             	mov    0x8(%ebp),%eax
 818d0c8:	8b 48 10             	mov    0x10(%eax),%ecx
 818d0cb:	8b 45 08             	mov    0x8(%ebp),%eax
 818d0ce:	8b 50 08             	mov    0x8(%eax),%edx
 818d0d1:	8b 45 08             	mov    0x8(%ebp),%eax
 818d0d4:	8b 40 0c             	mov    0xc(%eax),%eax
 818d0d7:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 818d0db:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 818d0df:	89 54 24 18          	mov    %edx,0x18(%esp)
 818d0e3:	89 44 24 14          	mov    %eax,0x14(%esp)
 818d0e7:	c7 44 24 10 94 2e b9 	movl   $0x8b92e94,0x10(%esp)
 818d0ee:	08 
 818d0ef:	c7 44 24 0c 72 04 00 	movl   $0x472,0xc(%esp)
 818d0f6:	00 
 818d0f7:	c7 44 24 08 a0 3b b9 	movl   $0x8b93ba0,0x8(%esp)
 818d0fe:	08 
 818d0ff:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818d106:	08 
 818d107:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818d10e:	e8 f7 6a 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818d113:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818d118:	e9 1d 01 00 00       	jmp    818d23a <_ZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoE+0x28f>
 818d11d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818d120:	89 04 24             	mov    %eax,(%esp)
 818d123:	e8 94 73 26 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 818d128:	83 f0 01             	xor    $0x1,%eax
 818d12b:	84 c0                	test   %al,%al
 818d12d:	74 62                	je     818d191 <_ZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoE+0x1e6>
 818d12f:	8b 45 08             	mov    0x8(%ebp),%eax
 818d132:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 818d136:	0f bf d8             	movswl %ax,%ebx
 818d139:	8b 45 08             	mov    0x8(%ebp),%eax
 818d13c:	8b 48 10             	mov    0x10(%eax),%ecx
 818d13f:	8b 45 08             	mov    0x8(%ebp),%eax
 818d142:	8b 50 08             	mov    0x8(%eax),%edx
 818d145:	8b 45 08             	mov    0x8(%ebp),%eax
 818d148:	8b 40 0c             	mov    0xc(%eax),%eax
 818d14b:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 818d14f:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 818d153:	89 54 24 18          	mov    %edx,0x18(%esp)
 818d157:	89 44 24 14          	mov    %eax,0x14(%esp)
 818d15b:	c7 44 24 10 e0 2e b9 	movl   $0x8b92ee0,0x10(%esp)
 818d162:	08 
 818d163:	c7 44 24 0c 7b 04 00 	movl   $0x47b,0xc(%esp)
 818d16a:	00 
 818d16b:	c7 44 24 08 a0 3b b9 	movl   $0x8b93ba0,0x8(%esp)
 818d172:	08 
 818d173:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818d17a:	08 
 818d17b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818d182:	e8 83 6a 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818d187:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818d18c:	e9 a9 00 00 00       	jmp    818d23a <_ZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoE+0x28f>
 818d191:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 818d198:	8d 45 e8             	lea    -0x18(%ebp),%eax
 818d19b:	89 44 24 08          	mov    %eax,0x8(%esp)
 818d19f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 818d1a6:	00 
 818d1a7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818d1aa:	89 04 24             	mov    %eax,(%esp)
 818d1ad:	e8 7a 97 f8 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 818d1b2:	83 f0 01             	xor    $0x1,%eax
 818d1b5:	84 c0                	test   %al,%al
 818d1b7:	74 5f                	je     818d218 <_ZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoE+0x26d>
 818d1b9:	8b 45 08             	mov    0x8(%ebp),%eax
 818d1bc:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 818d1c0:	0f bf d8             	movswl %ax,%ebx
 818d1c3:	8b 45 08             	mov    0x8(%ebp),%eax
 818d1c6:	8b 48 10             	mov    0x10(%eax),%ecx
 818d1c9:	8b 45 08             	mov    0x8(%ebp),%eax
 818d1cc:	8b 50 08             	mov    0x8(%eax),%edx
 818d1cf:	8b 45 08             	mov    0x8(%ebp),%eax
 818d1d2:	8b 40 0c             	mov    0xc(%eax),%eax
 818d1d5:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 818d1d9:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 818d1dd:	89 54 24 18          	mov    %edx,0x18(%esp)
 818d1e1:	89 44 24 14          	mov    %eax,0x14(%esp)
 818d1e5:	c7 44 24 10 2c 2f b9 	movl   $0x8b92f2c,0x10(%esp)
 818d1ec:	08 
 818d1ed:	c7 44 24 0c 85 04 00 	movl   $0x485,0xc(%esp)
 818d1f4:	00 
 818d1f5:	c7 44 24 08 a0 3b b9 	movl   $0x8b93ba0,0x8(%esp)
 818d1fc:	08 
 818d1fd:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818d204:	08 
 818d205:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818d20c:	e8 f9 69 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818d211:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818d216:	eb 22                	jmp    818d23a <_ZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoE+0x28f>
 818d218:	8b 45 08             	mov    0x8(%ebp),%eax
 818d21b:	c6 00 01             	movb   $0x1,(%eax)
 818d21e:	8b 45 08             	mov    0x8(%ebp),%eax
 818d221:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 818d225:	0f bf d0             	movswl %ax,%edx
 818d228:	8b 45 e8             	mov    -0x18(%ebp),%eax
 818d22b:	39 c2                	cmp    %eax,%edx
 818d22d:	7f 06                	jg     818d235 <_ZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoE+0x28a>
 818d22f:	8b 45 08             	mov    0x8(%ebp),%eax
 818d232:	c6 00 00             	movb   $0x0,(%eax)
 818d235:	b8 00 00 00 00       	mov    $0x0,%eax
 818d23a:	83 c4 44             	add    $0x44,%esp
 818d23d:	5b                   	pop    %ebx
 818d23e:	5d                   	pop    %ebp
 818d23f:	c3                   	ret

```

```c
// ARAD::DATABASE::ITEM_QUERY::arad_sp_buy_item_check @ 0x818cfab

/* ARAD::DATABASE::ITEM_QUERY::arad_sp_buy_item_check(ARAD_DATAS::BuyItemInfo&) */

undefined4 ARAD::DATABASE::ITEM_QUERY::arad_sp_buy_item_check(BuyItemInfo *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_1c;
  char local_15 [5];
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,7,0);
  if (local_10 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::ITEM_QUERY::arad_sp_buy_item_check(ARAD_DATAS::BuyItemInfo&)",
               0x454,"%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    local_15[0] = '\0';
    local_15[1] = '\0';
    local_15[2] = '\0';
    local_15[3] = '\0';
    local_15[4] = 0;
    GetQuarterOfYear(local_15);
    if (*(short *)(param_1 + 2) == 1) {
      MySQL::set_query(local_10,
                       "select count(*) from prod_sale_entry_%s where  ipg_no = %d and  m_id = %d   and  charac_no = %d"
                       ,local_15,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc),
                       *(undefined4 *)(param_1 + 8));
    }
    else {
      MySQL::set_query(local_10,
                       "select count(*) from prod_sale_entry_%s where  ipg_no = %d and  m_id = %d",
                       local_15,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc));
    }
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 == '\x01') {
      cVar1 = MySQL::fetch(local_10);
      if (cVar1 == '\x01') {
        local_1c = 0;
        cVar1 = MySQL::get_int(local_10,0,&local_1c);
        if (cVar1 == '\x01') {
          *param_1 = (BuyItemInfo)0x1;
          if (*(short *)(param_1 + 4) <= local_1c) {
            *param_1 = (BuyItemInfo)0x0;
          }
          uVar2 = 0;
        }
        else {
          LogManager::logFormat
                    (1,"localjapan/Arad_DB_Query.cpp",
                     "int ARAD::DATABASE::ITEM_QUERY::arad_sp_buy_item_check(ARAD_DATAS::BuyItemInfo&)"
                     ,0x485,"RESULT_COUNT MID[%d], CHARIDX[%d], ITEMIDX[%d], CHECKTYPE[%d]",
                     *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0x10),(int)*(short *)(param_1 + 2));
          uVar2 = 0xffffffff;
        }
      }
      else {
        LogManager::logFormat
                  (1,"localjapan/Arad_DB_Query.cpp",
                   "int ARAD::DATABASE::ITEM_QUERY::arad_sp_buy_item_check(ARAD_DATAS::BuyItemInfo&)"
                   ,0x47b,
                   "[ERROR] DB Fetch Error => MID[%d], CHARIDX[%d], ITEMIDX[%d], CHECKTYPE[%d]",
                   *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),
                   *(undefined4 *)(param_1 + 0x10),(int)*(short *)(param_1 + 2));
        uVar2 = 0xffffffff;
      }
    }
    else {
      LogManager::logFormat
                (1,"localjapan/Arad_DB_Query.cpp",
                 "int ARAD::DATABASE::ITEM_QUERY::arad_sp_buy_item_check(ARAD_DATAS::BuyItemInfo&)",
                 0x472,"[ERROR] DB Exec Error => MID[%d], CHARIDX[%d], ITEMIDX[%d], CHECKTYPE[%d]",
                 *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0x10),(int)*(short *)(param_1 + 2));
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

```

