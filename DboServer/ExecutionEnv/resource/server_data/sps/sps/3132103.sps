
Scene(1, "2408" )
--[
        Action( "wait" )
        --[
                Condition( "recv event from item" )
                --[
                        Param( "item index", 98019 )
                --]
                End()
        --]
        End()

        Action( "say" )
        --[
                Param( "tblidx", 3279 )
        --]
        End()

        Action( "send event to wps" )
        --[
                Param( "wps index", 2408 )
                Param( "event id", 544 )
        --]
        End()

        Action( "sps end" )
        --[
        
        --]
        End()
--]
End()