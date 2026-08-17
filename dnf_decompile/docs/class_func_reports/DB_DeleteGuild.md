# DB_DeleteGuild

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0843a9c0 DB_DeleteGuild::dispatch  [0x0843a9c0-0x843ac3d] ===
 843a9c0:	55                   	push   %ebp
 843a9c1:	89 e5                	mov    %esp,%ebp
 843a9c3:	83 ec 28             	sub    $0x28,%esp
 843a9c6:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843a9cb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843a9d2:	00 
 843a9d3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843a9da:	00 
 843a9db:	89 04 24             	mov    %eax,(%esp)
 843a9de:	e8 5b a8 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843a9e3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843a9e6:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843a9eb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843a9f2:	00 
 843a9f3:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 843a9fa:	00 
 843a9fb:	89 04 24             	mov    %eax,(%esp)
 843a9fe:	e8 3b a8 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843aa03:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843aa06:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 843aa0d:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 843aa14:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843aa17:	89 44 24 04          	mov    %eax,0x4(%esp)
 843aa1b:	8b 45 14             	mov    0x14(%ebp),%eax
 843aa1e:	89 04 24             	mov    %eax,(%esp)
 843aa21:	e8 70 1d 1e 00       	call   861c796 <_ZN6StreamrsERj>
 843aa26:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843aa29:	89 44 24 04          	mov    %eax,0x4(%esp)
 843aa2d:	8b 45 14             	mov    0x14(%ebp),%eax
 843aa30:	89 04 24             	mov    %eax,(%esp)
 843aa33:	e8 5e 1d 1e 00       	call   861c796 <_ZN6StreamrsERj>
 843aa38:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843aa3b:	85 c0                	test   %eax,%eax
 843aa3d:	74 07                	je     843aa46 <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0x86>
 843aa3f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843aa42:	85 c0                	test   %eax,%eax
 843aa44:	75 0a                	jne    843aa50 <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0x90>
 843aa46:	b8 01 00 00 00       	mov    $0x1,%eax
 843aa4b:	e9 ec 01 00 00       	jmp    843ac3c <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0x27c>
 843aa50:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843aa53:	89 44 24 08          	mov    %eax,0x8(%esp)
 843aa57:	c7 44 24 04 1c 4d c5 	movl   $0x8c54d1c,0x4(%esp)
 843aa5e:	08 
 843aa5f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843aa62:	89 04 24             	mov    %eax,(%esp)
 843aa65:	e8 56 97 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843aa6a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843aa71:	00 
 843aa72:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843aa75:	89 04 24             	mov    %eax,(%esp)
 843aa78:	e8 a9 98 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843aa7d:	83 f0 01             	xor    $0x1,%eax
 843aa80:	84 c0                	test   %al,%al
 843aa82:	74 0a                	je     843aa8e <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0xce>
 843aa84:	b8 00 00 00 00       	mov    $0x0,%eax
 843aa89:	e9 ae 01 00 00       	jmp    843ac3c <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0x27c>
 843aa8e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843aa91:	89 44 24 08          	mov    %eax,0x8(%esp)
 843aa95:	c7 44 24 04 60 4d c5 	movl   $0x8c54d60,0x4(%esp)
 843aa9c:	08 
 843aa9d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843aaa0:	89 04 24             	mov    %eax,(%esp)
 843aaa3:	e8 18 97 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843aaa8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843aaaf:	00 
 843aab0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843aab3:	89 04 24             	mov    %eax,(%esp)
 843aab6:	e8 6b 98 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843aabb:	83 f0 01             	xor    $0x1,%eax
 843aabe:	84 c0                	test   %al,%al
 843aac0:	74 0a                	je     843aacc <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0x10c>
 843aac2:	b8 00 00 00 00       	mov    $0x0,%eax
 843aac7:	e9 70 01 00 00       	jmp    843ac3c <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0x27c>
 843aacc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843aacf:	89 44 24 08          	mov    %eax,0x8(%esp)
 843aad3:	c7 44 24 04 ac 4d c5 	movl   $0x8c54dac,0x4(%esp)
 843aada:	08 
 843aadb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843aade:	89 04 24             	mov    %eax,(%esp)
 843aae1:	e8 da 96 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843aae6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843aaed:	00 
 843aaee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843aaf1:	89 04 24             	mov    %eax,(%esp)
 843aaf4:	e8 2d 98 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843aaf9:	83 f0 01             	xor    $0x1,%eax
 843aafc:	84 c0                	test   %al,%al
 843aafe:	74 0a                	je     843ab0a <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0x14a>
 843ab00:	b8 00 00 00 00       	mov    $0x0,%eax
 843ab05:	e9 32 01 00 00       	jmp    843ac3c <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0x27c>
 843ab0a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843ab0d:	89 44 24 08          	mov    %eax,0x8(%esp)
 843ab11:	c7 44 24 04 dc 4d c5 	movl   $0x8c54ddc,0x4(%esp)
 843ab18:	08 
 843ab19:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ab1c:	89 04 24             	mov    %eax,(%esp)
 843ab1f:	e8 9c 96 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843ab24:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843ab2b:	00 
 843ab2c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ab2f:	89 04 24             	mov    %eax,(%esp)
 843ab32:	e8 ef 97 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843ab37:	83 f0 01             	xor    $0x1,%eax
 843ab3a:	84 c0                	test   %al,%al
 843ab3c:	74 0a                	je     843ab48 <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0x188>
 843ab3e:	b8 00 00 00 00       	mov    $0x0,%eax
 843ab43:	e9 f4 00 00 00       	jmp    843ac3c <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0x27c>
 843ab48:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843ab4b:	89 44 24 08          	mov    %eax,0x8(%esp)
 843ab4f:	c7 44 24 04 08 4e c5 	movl   $0x8c54e08,0x4(%esp)
 843ab56:	08 
 843ab57:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ab5a:	89 04 24             	mov    %eax,(%esp)
 843ab5d:	e8 5e 96 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843ab62:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843ab69:	00 
 843ab6a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ab6d:	89 04 24             	mov    %eax,(%esp)
 843ab70:	e8 b1 97 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843ab75:	83 f0 01             	xor    $0x1,%eax
 843ab78:	84 c0                	test   %al,%al
 843ab7a:	74 0a                	je     843ab86 <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0x1c6>
 843ab7c:	b8 00 00 00 00       	mov    $0x0,%eax
 843ab81:	e9 b6 00 00 00       	jmp    843ac3c <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0x27c>
 843ab86:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843ab89:	89 44 24 08          	mov    %eax,0x8(%esp)
 843ab8d:	c7 44 24 04 34 4e c5 	movl   $0x8c54e34,0x4(%esp)
 843ab94:	08 
 843ab95:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ab98:	89 04 24             	mov    %eax,(%esp)
 843ab9b:	e8 20 96 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843aba0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843aba7:	00 
 843aba8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843abab:	89 04 24             	mov    %eax,(%esp)
 843abae:	e8 73 97 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843abb3:	83 f0 01             	xor    $0x1,%eax
 843abb6:	84 c0                	test   %al,%al
 843abb8:	74 07                	je     843abc1 <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0x201>
 843abba:	b8 00 00 00 00       	mov    $0x0,%eax
 843abbf:	eb 7b                	jmp    843ac3c <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0x27c>
 843abc1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843abc4:	89 44 24 08          	mov    %eax,0x8(%esp)
 843abc8:	c7 44 24 04 60 4e c5 	movl   $0x8c54e60,0x4(%esp)
 843abcf:	08 
 843abd0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843abd3:	89 04 24             	mov    %eax,(%esp)
 843abd6:	e8 e5 95 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843abdb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843abe2:	00 
 843abe3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843abe6:	89 04 24             	mov    %eax,(%esp)
 843abe9:	e8 38 97 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843abee:	83 f0 01             	xor    $0x1,%eax
 843abf1:	84 c0                	test   %al,%al
 843abf3:	74 07                	je     843abfc <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0x23c>
 843abf5:	b8 00 00 00 00       	mov    $0x0,%eax
 843abfa:	eb 40                	jmp    843ac3c <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0x27c>
 843abfc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843abff:	89 44 24 08          	mov    %eax,0x8(%esp)
 843ac03:	c7 44 24 04 8c 4e c5 	movl   $0x8c54e8c,0x4(%esp)
 843ac0a:	08 
 843ac0b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843ac0e:	89 04 24             	mov    %eax,(%esp)
 843ac11:	e8 aa 95 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843ac16:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843ac1d:	00 
 843ac1e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843ac21:	89 04 24             	mov    %eax,(%esp)
 843ac24:	e8 fd 96 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843ac29:	83 f0 01             	xor    $0x1,%eax
 843ac2c:	84 c0                	test   %al,%al
 843ac2e:	74 07                	je     843ac37 <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0x277>
 843ac30:	b8 00 00 00 00       	mov    $0x0,%eax
 843ac35:	eb 05                	jmp    843ac3c <_ZN14DB_DeleteGuild8dispatchEiiP6Stream+0x27c>
 843ac37:	b8 01 00 00 00       	mov    $0x1,%eax
 843ac3c:	c9                   	leave
 843ac3d:	c3                   	ret

```

```c
// DB_DeleteGuild::dispatch @ 0x843a9c0

/* DB_DeleteGuild::dispatch(int, int, Stream*) */

undefined4 DB_DeleteGuild::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  uint local_1c;
  uint local_18;
  MySQL *local_14;
  MySQL *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  if ((local_18 == 0) || (local_1c == 0)) {
    uVar2 = 1;
  }
  else {
    MySQL::set_query(local_14,"upDate charac_info set guild_right=0, guild_id=0 where charac_no=%d",
                     local_18);
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 == '\x01') {
      MySQL::set_query(local_10,
                       "upDate guild_info set expire_flag=1, expire_time=now() where guild_id=%d",
                       local_1c);
      cVar1 = MySQL::exec(local_10,true);
      if (cVar1 == '\x01') {
        MySQL::set_query(local_10,"deLete from guild_introduce where guild_id=%d",local_1c);
        cVar1 = MySQL::exec(local_10,true);
        if (cVar1 == '\x01') {
          MySQL::set_query(local_10,"deLete from guild_member where guild_id=%d",local_1c);
          cVar1 = MySQL::exec(local_10,true);
          if (cVar1 == '\x01') {
            MySQL::set_query(local_10,"deLete from guild_visit where guild_id=%d",local_1c);
            cVar1 = MySQL::exec(local_10,true);
            if (cVar1 == '\x01') {
              MySQL::set_query(local_10,"deLete from guild_notice where guild_id=%d",local_1c);
              cVar1 = MySQL::exec(local_10,true);
              if (cVar1 == '\x01') {
                MySQL::set_query(local_10,"deLete from guild_skill where guild_id=%d",local_1c);
                cVar1 = MySQL::exec(local_10,true);
                if (cVar1 == '\x01') {
                  MySQL::set_query(local_14,
                                   "upDate charac_info set guild_id=0, guild_secede=1 where guild_id = %u"
                                   ,local_1c);
                  cVar1 = MySQL::exec(local_14,true);
                  if (cVar1 == '\x01') {
                    uVar2 = 1;
                  }
                  else {
                    uVar2 = 0;
                  }
                }
                else {
                  uVar2 = 0;
                }
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

